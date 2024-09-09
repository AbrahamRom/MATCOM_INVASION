#include <curses.h>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <semaphore.h>

#include "NF_Mem_Manager.h"
#include "menu.h"
#include "ship.h"
#include "stats.h"
#include "bullets_p_c.h"
#include "print_frame.h"
#include "NF_linkedlist.h"
#include "enemies.h"
#include "bomb.h"
#include "save_local.h"

#include "NF_Mem_Manager.c"
#include "menu.c"
#include "ship.c"
#include "stats.c"
#include "bullets_p_c.c"
#include "print_frame.c"
#include "NF_linkedlist.c"
#include "enemies.c"
#include "bomb.c"
#include "save_local.c"

#define DELAY 10000

int main()
{
    MEVENT event;
    int ch;

    // Inicializa ncurses
    initscr();
    start_color();
    raw();
    nodelay(stdscr, TRUE);
    noecho();
    keypad(stdscr, TRUE); // Entrada por teclado
    mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL); // Entrada por mouse
    curs_set(0);

    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLACK);
    init_pair(4, COLOR_YELLOW, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);

    //charging_last_game = false;
    create_OBJ_ARR();

    while (true)
    {
        char m = menu();
        if (m == 'E' || m == 'e')
        {
            break;
        }

        /////////////////Area del juego///////////////////////////////////
        printf("\033[?1003h\n"); // Habilitar reporte de posición del mouse

        ////////////Inicializar los elementos////////

        player_ship = create_ship(); // La nave del jugador
        if (!charging_last_game)
        {
            LIVES = 5;
            ENEMY_LAND = 0;
            SCORE = 0;
        }
        charging_last_game = false;
        MAX_ENEMIES_COUNT = 20;
        TIMER_LIMIT = 25;

        pthread_t hilo_productor;
        sem_init(&sem, 0, 1);
        pthread_create(&hilo_productor, NULL, productor, NULL);

        /// Fin de las inicializaciones///

        while (true)
        {
            print_global_frame(ch, event);

            refresh(); // Pintar en pantalla
            int result = evaluate_stats();
            if (result == 1)
            {
                if (game_over() == 1)
                {
                    break;
                }
            }
            usleep(DELAY); // Esperar para volver a actualizar
            if ((ch = getch()) == 'p')
            {
                int pause = pause_menu();
                if (pause == 2)
                {
                    break;
                }
                if (pause == 4)
                {
                    printf("\033[?1003h\n"); // Habilitar reporte de posición del mouse
                    endwin(); // Salir del modo curses
                    exit(0);
                }
            }
        }

        ///
        /// FALTA LIBERAR LA MEMORIA DESPUES DEL JUEGO;
        ///
        //pthread_join(hilo_productor, NULL);
        sem_destroy(&sem); // Destruye el semáforo

        free(player_ship);
        free_all();

        printf("\033[?1003h\n"); // Habilitar reporte de posición del mouse
    }
    endwin(); // Salir del modo curses
    return 0;
}
