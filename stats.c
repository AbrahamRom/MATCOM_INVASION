#include <locale.h>
#include <string.h>
#include <ncurses.h>
#include "stats.h"
#include "bomb.h"
#include "enemies.h"
#include "NF_Mem_Manager.h"

void display_info(void)
{

    // Mostrar el puntaje
    mvprintw(1, 2, "SCORE: %d", SCORE);

    // Mostrar las vidas
    mvprintw(1, COLS - 10, "Vidas: %d", LIVES);
   // for (int i = 0; i < LIVES; i++)
    //{
      //  attron(COLOR_PAIR(3));
       // mvaddch(1, COLS - 3 + i, 'a'); // Dibuja corazones
        //attroff(COLOR_PAIR(3));
   // }
}


void draw_border(void)
{
    
    int height, width;
    getmaxyx(stdscr, height, width);

    
    int top_margin = 2;
    int left_margin = 2;
    int right_margin = 2;
    int bottom_margin = 2;

    
    int game_height = height - top_margin - bottom_margin;
    int game_width = width - left_margin - right_margin;

    
    for (int i = 0; i < game_width; i++)
    {
        mvaddch(top_margin, left_margin + i, '_');                   
        //mvaddch(top_margin + game_height - 1, left_margin + i, '_'); 
    }
    //for (int i = 0; i < game_height; i++)
    //{
      //  mvaddch(top_margin + i, left_margin, '|');                 
      //  mvaddch(top_margin + i, left_margin + game_width - 1, '|');
    //}

    display_info();

    
    const char *title = "MATCOM INVASION";
    int title_x = (width - strlen(title)) / 2; 
    attron(A_BOLD | A_UNDERLINE);             
    attron(COLOR_PAIR(2));
    mvprintw(top_margin, title_x, "%s", title);
    attroff(A_BOLD | A_UNDERLINE); 
    attroff(COLOR_PAIR(2));

    refresh(); 
}

int evaluate_stats(void)
{

    if(SCORE >= 250 && SCORE < 500)
    {
        TIMER_LIMIT = 20;
        MAX_ENEMIES_COUNT = 30;
    }
    else if(SCORE >= 500 && SCORE < 750)
    {
        TIMER_LIMIT = 15;
        MAX_ENEMIES_COUNT = 40;
    }
    else if(SCORE >= 750 && SCORE < 1000)
    {
        TIMER_LIMIT = 10;
        MAX_ENEMIES_COUNT = 50;
    }
    else if( SCORE >= 1000)
    {
        TIMER_LIMIT = 5;
        MAX_ENEMIES_COUNT = 60;
    }
    return LIVES <= 0 || ENEMY_LAND == 1;
}



