#include <curses.h>
#include <ncurses.h>
#include <stdlib.h>
#include "ship.h"

//#include "bomb.h"
#include "objects.c"
#include "bullets_p_c.h"
#include "print_frame.h"
#include "NF_Mem_Manager.h"

char *model[] = {
    "   ^  ",
    "  /|\\ ",
    "</_|_\\>"};

Object *create_ship(void) // it creates the player's ship
{
    char *title = "Terminator";
    Point start;
    start.x = (double)(COLS / 2);
    start.y = (double)(LINES - 5);
    Object *obj = make_obj(title, model, start, ship, 3, 0, 0);
    return obj;
}

Object *create_bullet(Point *ship_position) // assignes to the bullet variable a new bullet object
{
    char *bullet_1 = "bullet_1";
    char *design[] = {"|"};
    Point start = {.x = (double)(ship_position->x + 3), .y = ship_position->y};
    Object *bullet = make_obj(bullet_1, design, start, s_bullet, 1, 0, 0);
    return bullet;
}

// /*void append_node_bullet(Object *obj)
// {
//     Node *newNode = create_node(obj);
//     if (bullet_head == NULL)
//     {
//         bullet_head = newNode;
//         return;
//     }
//     Node *temp = bullet_head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }*/

void shot(int ch, MEVENT event, Object *ship)
{
    if (ch == KEY_MOUSE)
    {
        if (getmouse(&event) == OK)
       {
            if (event.bstate & BUTTON1_PRESSED)
            {
                consumidor(ship);
               // remove_node_bomb(last_bomb());
            }
       }
    }
    if (ch == 100 || ch == KEY_DL)
    {
        consumidor(ship);
    }
}

void print_shot(void)
{
    if (_bullet_head != NULL)
    {
        _print_list(_bullet_head);
    }
}

/*void remove_node_bullet(Node *node)
{
    if (bullet_head == node)
    {
        bullet_head = node->next; // global
        free_node(node);
        return;
    }
    Node *head = bullet_head;
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        if (head == node)
        {
            temp->next = head->next;
            free_node(head);
        }
    }
}*/
// void remove_node_bullet(int index)
// {
//     delete_node(&_bombs_head, index);
//     free_Object(index);
// }
