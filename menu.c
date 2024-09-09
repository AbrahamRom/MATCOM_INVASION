//
// Created by 18137 on 16/08/2024.
//

#include "menu.h"
#include <curses.h>
#include <stdlib.h>
#include <string.h>
//#include "save_local.h"
#include "NF_Mem_Manager.h"
#include "save_local.h"

int charging_last_game;

const char *alien1[] = {
    "    ####                               ####    ",
    "  ###  ###                           ###  ###  ",
    " ##      ##                         ##      ## ",
    " ##      ##                         ##      ## ",
    "  ###   ##                           ##    ##  ",
    "    ###  ##                          ##  ###   ",
    "      ##  ##       #########        ##  ##     ",
    "       ##  ##########################  ##      ",
    "        ##  ##                    ##  ##       ",
    "      ###                             ###      ",
    "    ###                                  ##    ",
    "   ##                                      ##  ",
    "  #                                         ## ",
    " #                                           ##",
    "##                                           ##",
    "##                                            #",
    " #           #####           #####           ##",
    " ##                                         ## ",
    "  ###        ########       ########       ##  ",
    "    ##     ####### ###    #######  ##    ###   ",
    "     ##   #######    ############   ##  ##     ",
    "       #  ######### ###  ######### ### ##      ",
    "      ##   ###########    ###########   #      ",
    "     ##     ########        #######      #     ",
    "     #                ## ##              #     ",
    "     ##               #   #             ##     ",
    "      ##                               ##      ",
    "       ##                             ##       ",
    "         ###        #########       ###        ",
    "           ####       #####     ####           ",
    "              ####             ###             ",
    "                 ##           ##               ",
    "                  #############                "};

const char *alien2[] = {

    "           @     @",
    "     / \\   {_____}   / \\ ",
    "    / | \\_/*******\\_/ | \\   ",
    "   (  | /  ~  '  ~ \\  |  )  ",
    "   \\  | |  0     0 |  | /   ",
    "    \\   |     A    |   /     ",
    "     \\       ___      /",
    "      \\______________/  ",
    "   __-------*   *-------__  ",
    "  /  /---           ---\\  \\   ",
    " /  /   (           )    \\  \\ ",
    "(  (    (           )     )  )",
    " \\  \\    |         |     /  /",
    "  \\  \\   |         |    /  /  ",
    "   ****  |         |   ****    ",
    "   //|\\\\  \\_______/   //|\\\\ ",
    "           * *'* *               ",
    "          .* *.* *.              ",
    "         '***' '***'               "};

void draw_menu()
{
    clear();

    int height = LINES;
    int width = COLS;

    
    const char* subtitle = "by Abraham & Richard";
    const char* option1 = "S - Empezar Partida";
    const char* option2 = "E - Salir del juego";
    const char* option3 = "C - Cargar último juego";
    const char* instructions = "Presione E o S para elegir una opción.";

    

    const char *title1[] = {
        " _________    _______  _________  ________   ________    _________ ",
        "(  _   _  )  (  ___  ) \\__   __/ (  _____ \\ (  ____  )  (  _   _  )",
        "| ( ) ( ) |  | (   ) |    ) (    | (     \\/ | (    ) |  | ( ) ( ) |",
        "| | | | | |  | (___) |    | |    | |        | |    | |  | | | | | |",
        "| | (_) | |  |  ___  |    | |    | |        | |    | |  | | (_) | |",
        "| |     | |  | (   ) |    | |    | |        | |    | |  | |     | |",
        "| )     ( |  | )   ( |    | |    | (____/\\  | (____) |  | )     ( |",
        "|/       \\|  |/     \\|    )_(    (_______/  (________)  |/       \\|",
        "  ",
        "_________  _                     _______   ________    _________   ________   _       ",
        "\\__   __/ ( (    /|  |\\     /|  (  ___  ) (  _____ \\   \\__   __/  (  ____  ) ( (    /|",
        "   ) (    |  \\  ( |  | )   ( |  | (   ) | | (     \\/      ) (     | (    ) | |  \\  ( |",
        "   | |    |   \\ | |  | |   | |  | (___) | | (______       | |     | |    | | |   \\ | |",
        "   | |    | (\\ \\) |  ( (   ) )  |  ___  | (______  )      | |     | |    | | | (\\ \\) |",
        "   | |    | | \\   |   \\ \\_/ /   | (   ) |        ) |      | |     | |    | | | | \\   |",
        "___) (___ | )  \\  |    \\   /    | )   ( | /\\_____) |   ___) (___  | (____) | | )  \\  |",
        "\\_______/ |/    )_)     \\_/     |/     \\| \\________)   \\_______/  (________) |/    )_)"};

    int titleX1 = (width - strlen(title1[0])) / 2;
    int titleX2 = (width - strlen(title1[15])) / 2;
    int titleY = 3;

    int subtitleX = (width - strlen(subtitle)) / 2;
    int subtitleY = titleY + 18;

    int option1X = (width - strlen(option1)) / 2;
    int option1Y = subtitleY + 5;

    int option2X = (width - strlen(option2)) / 2;
    int option2Y = option1Y + 1;

    int option3X = (width - strlen(option3)) / 2;
    int option3Y = option2Y + 1;

    int instructionsX = (width - strlen(instructions)) / 2;
    int instructionsY = option3Y + 2;

        for (int i = 0; i < 19; i++)
    {
        attron(COLOR_PAIR(6)); // Cambia de color
        mvprintw(10 + i, 2, "%s", alien2[i]);
        attroff(COLOR_PAIR(6));
    }

    for (int i = 0; i < 19; i++)
    {
        attron(COLOR_PAIR(1)); // Cambia de color
        mvprintw(20 + i, COLS - 35, "%s", alien2[i]);
        attroff(COLOR_PAIR(1));
    }

    for (int i = 0; i < 8; i++)
    {
        attron(COLOR_PAIR(3)); // Cambia de color
        mvprintw(titleY + i, titleX1, "%s", title1[i]);
        attroff(COLOR_PAIR(3));
    }

    for (int i = 8; i < 17; i++)
    {
        attron(COLOR_PAIR(5)); // Cambia de color
        mvprintw(titleY + i, titleX2, "%s", title1[i]);
        attroff(COLOR_PAIR(5));
    }


    attron(COLOR_PAIR(2));
    mvprintw(subtitleY, subtitleX, "%s", subtitle);
    attroff(COLOR_PAIR(2));

    mvprintw(option1Y, option1X, "%s", option1);
    mvprintw(option2Y, option2X, "%s", option2);
    mvprintw(option3Y, option3X, "%s", option3);

    mvprintw(instructionsY, instructionsX, "%s", instructions);

    // Refrescar la pantalla para mostrar los cambios
    refresh();
}

char menu()
{
    char opcion;

    draw_menu();
    while (1)
    {
        opcion = getch();
        if (opcion == 'S' || opcion == 's')
        {
            break;
        }
        else if (opcion == 'E' || opcion == 'e')
        {
            // printf("\033[?1003l\n"); // Deshabilitar reporte de posición del mouse
            // endwin(); // Salir del modo curses
            // exit(0);
            break;
        }
        else if (opcion == 'C' || opcion == 'c')
        {
            charging_last_game = true;
            load_game();
            break;
        }
    }
    return opcion;
}

int pause_menu()
{
    char opcion;

    int height = LINES;
    int width = COLS;
    move((LINES)-3, 0);
    addstr("PAUSA");

    const char* option1 = "1 - Reanudar Partida";
    const char* option2 = "2 - Ir al menú principal del juego";
    const char* option3 = "3 - Salir del juego";
    const char* option4 = "4 - Guardar y Salir";
    const char* instructions = "Presione [1,2,3] para elegir una opción.";

    int option1X = (width - strlen(option1)) / 2;
    int option1Y = height / 4 + 10;

    int option2X = (width - strlen(option2)) / 2;
    int option2Y = option1Y + 1;

    int option3X = (width - strlen(option3)) / 2;
    int option3Y = option2Y + 1;

    int option4X = (width - strlen(option4)) / 2;
    int option4Y = option3Y + 1;

    int instructionsX = (width - strlen(instructions)) / 2;
    int instructionsY = option4Y + 2;

    mvprintw(option1Y, option1X, "%s", option1);
    mvprintw(option2Y, option2X, "%s", option2);
    mvprintw(option3Y, option3X, "%s", option3);
    mvprintw(option4Y, option4X, "%s", option4);

    mvprintw(instructionsY, instructionsX, "%s", instructions);

    refresh();

    while (1)
    {
        opcion = getch();
        if (opcion == '1')
        {
            return 1;
        }
        else if (opcion == '2')
        {
            return 2;
        }
        else if (opcion == '3')
        {
            printf("\033[?1003l\n"); // Deshabilitar reporte de posición del mouse
            endwin(); // Salir del modo curses
            exit(0);
        }
        else if (opcion == '4')
        {
            save_game();
            return 4;
        }
    }
}

int game_over(void)
{
    clear();
    char opcion;
    int start_x = 10;
    int start_y = 5;

    char* large_font[] = {
        " #########                                          ##########",
        " ##     ##                                          ##      ##",
        " ##            ####       ##     ##    #######      ##      ##   ##    ##   #######   #######",
        " ##   ####    ##  ##     ##  # #  ##   ##           ##      ##   ##    ##   ##        ##    ##",
        " ##     ##   ##    ##   ##    #    ##  #####        ##      ##   ##    ##   #####     ## ###",
        " ##     ##   ########   ##         ##  ##           ##      ##    ##  ##    ##        ##  ##",
        " #########   ##    ##   ##         ##  #######      ##########     ####     #######   ##   ##"
    };
    for (int i = 0; i < 33; i++)
    {
        attron(COLOR_PAIR(2)); // Cambia de color
        mvprintw(LINES - 40 + i, COLS - 60, "%s", alien1[i]);
        attroff(COLOR_PAIR(2));
    }
    for (int i = 0; i < 19; i++)
    {
        attron(COLOR_PAIR(2)); // Cambia de color
        mvprintw(15 + i, 2, "%s", alien2[i]);
        attroff(COLOR_PAIR(2));
    }

    for (int i = 0; i < 7; i++)
    {
        attron(COLOR_PAIR((i % 4) + 1)); // Cambia de color
        mvprintw(start_y + i, start_x, "%s", large_font[i]);
        attroff(COLOR_PAIR((i % 4) + 1));
    }
    char* motivo_1 = "HAS PERDIDO. UN ENEMIGO HA LLEGADO A TU TERRITORIO.";

    char* motivo_2 = "HAS PERDIDO. TU NAVE HA SIDO DESTRUIDA.";
    char* motivo;

    switch (ENEMY_LAND)
    {
    case 1:
        motivo = motivo_1;
        break;

    default:
        motivo = motivo_2;
        break;
    }
    attron(COLOR_PAIR(1));
    mvprintw(start_y + 8, start_x, "%s", motivo);
    attroff(COLOR_PAIR(1));
    attron(COLOR_PAIR(1));
    mvprintw(start_y + 9, start_x, "SCORE: %d", SCORE);
    attroff(COLOR_PAIR(1));

    const char* option1 = "1 - Ir al menú principal del juego";
    const char* option2 = "2 - Salir del juego";
    const char* instructions = "Presione [1,2] para elegir una opción.";

    int height = LINES;
    int width = COLS;

    int option1X = (width - strlen(option1)) / 2;
    int option1Y = height / 4 + 10;

    int option2X = (width - strlen(option2)) / 2;
    int option2Y = option1Y + 1;

    int instructionsX = (width - strlen(instructions)) / 2;
    int instructionsY = option2Y + 2;

    mvprintw(option1Y, option1X, "%s", option1);
    mvprintw(option2Y, option2X, "%s", option2);

    mvprintw(instructionsY, instructionsX, "%s", instructions);

    refresh();

    while (1)
    {
        opcion = getch();
        if (opcion == '1')
        {
            return 1;
        }
        else if (opcion == '2')
        {
            printf("\033[?1003l\n"); // Deshabilitar reporte de posición del mouse
            endwin(); // Salir del modo curses
            exit(0);
        }
    }
}
