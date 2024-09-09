#include <curses.h>
#include <ncurses.h>
#include "print_frame.h"

//#include "enemies.h"
#include "objects.h"
#include "ship.h"
#include "stats.h"
//#include "bomb.h"
#include "NF_Mem_Manager.h"

void move_ship(int ch, MEVENT event, Object* ship)
{
    Point* position = ship->position;
    mov_dir direction = {.x_dir = 0, .y_dir = 0};
    switch (ch)
    {
    case KEY_MOUSE:
        if (getmouse(&event) == OK)
        {
            if (event.x > position->x)
                direction.x_dir = 1;
            else if (event.x < position->x)
                direction.x_dir = -1;

            if (event.y > position->y)
                direction.y_dir = 1;
            else if (event.y < position->y)
                direction.y_dir = -1;

            // mvprintw(1, 0, "Mouse position: (%d, %d)", event.x, event.y);
            // clrtoeol();
            //  refresh();
        }
        break;
    case KEY_UP:
        if (ship->position->y > 0) ship->position->y--;
        break;
    case KEY_DOWN:
        if (ship->position->y < LINES - 3) ship->position->y++;
        break;
    case KEY_LEFT:
        if (ship->position->x > 0) ship->position->x--;
        break;
    case KEY_RIGHT:
        if (ship->position->x < COLS - 5) ship->position->x++;
        break;
    default:
        break;
    }
    move_obj(ship, direction);
}

void move_bullet(void)
{
    node* temp = _bullet_head;

    mov_dir mov = {.y_dir = -1};
    while (temp != NULL)
    {
        Object* obj = OBJ_ARR[temp->index]; // duda no se si este bien

        if (obj->position->y <= (double)3)
        {
            node* temp_remove = temp;
            temp = temp->next;
            eliminate_obj(&_bullet_head, temp_remove->index);
        }
        else
        {
            move_obj(obj, mov);
            temp = temp->next;
        }
    }
}

/*Node* last_bomb()
{
    Node* temp = bomb_head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}*/
void print_global_frame(int ch, MEVENT event)
{
    clear();
    draw_border();
    move_ship(ch, event, player_ship);
    move_bullet();
    move_enemies();
    move_bombs(player_ship);
    enemies_deployment();
    bombs_deployment();
    shot(ch, event, player_ship);
    print_obj(player_ship);
    print_enemies();
    print_bombs();
    print_shot();
    validate_colition();
    // if(bomb_head != NULL)
    // {
    //     remove_node_bomb(last_bomb());
    // }
    //mvprintw(0,0,"%d",(int)bomb_head);
}
