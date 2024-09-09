#include "enemies.h"
#include <stddef.h>
#include <math.h>
#include "objects.h"
#include "curses.h"
#include "ship.h"
#include <time.h>
#include "stats.h"
#include "bomb.h"
#include "NF_Mem_Manager.h"

char *title_1 = "O-bomb";
char *model_1[] = {"O"};

char *title_2 = "*-bomb";
char *model_2[] = {"*"};

Object *create_bomb(char *title, Point start, char *design[])
{
    Object *obj = make_obj(title, design, start, e_bullet, 1, 4, 0);
    return obj;
}

//
// /*void append_node_bomb(Object *obj)
// {
//     Node *newNode = create_node(obj);
//     if (bomb_head == NULL)
//     {
//         bomb_head = newNode;
//         return;
//     }
//     Node *temp = bomb_head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }*/
//
void print_bombs(void)
{
    if (_bombs_head != NULL)
    {
        _print_list(_bombs_head);
    }
}

// // void remove_node_bomb(Node* node)
// // {
// //     if (node != NULL)
// //     {
// //         if (bomb_head == node)
// //         {
// //             bomb_head = node->next; // global
// //             free_node(node);
// //             return;
// //         }
// //         Node* head = bomb_head;
// //         while (head != NULL)
// //         {
// //             Node* temp = head;
// //             head = head->next;
// //             if (head == node)
// //             {
// //                 temp->next = head->next;
// //                 free_node(head);
// //                 &head = NULL;
// //                 return;
// //             }
// //         }
// //     }
// // }
// void remove_node_bomb(int index)
// {
//     delete_node(&_bombs_head, index);
//     free_Object(index);
// }
//
void bombs_deployment(void)
{
    node *temp = _enemies_head;
    while (temp != NULL)
    {
        switch (OBJ_ARR[temp->index]->model_size)
        {
        case 3:
            OBJ_ARR[temp->index]->timer++;
            if (OBJ_ARR[temp->index]->timer >= TIMER_LIMIT)
            {
                OBJ_ARR[temp->index]->timer = 0;

                if ((double)rand() / RAND_MAX < PROBABILITY)
                {
                    Point point = {
                        .x = OBJ_ARR[temp->index]->position->x + 5, .y = OBJ_ARR[temp->index]->position->y + 3};
                    Object *bomb = create_bomb(title_1, point, model_1);
                    add_Object(bomb);
                }
            }
            break;
        case 2:
            OBJ_ARR[temp->index]->timer++;
            if (OBJ_ARR[temp->index]->timer >= TIMER_LIMIT)
            {
                OBJ_ARR[temp->index]->timer = 0;

                if ((double)rand() / RAND_MAX < PROBABILITY)
                {
                    Point point = {
                        .x = OBJ_ARR[temp->index]->position->x + 1, .y = OBJ_ARR[temp->index]->position->y + 2};
                    Object *bomb = create_bomb(title_2, point, model_2);
                    add_Object(bomb);
                }
            }
            break;
        default:
            break;
        }
        temp = temp->next;
    }
}

void move_bombs(Object *ship)
{
    node *temp = _bombs_head;

    mov_dir mov = {.y_dir = 0.02};

    while (temp != NULL)
    {
        int colision = 0;

        for (int i = 0; i < ship->col_points_amount; i++)
        {
            if ((int)(round(ship->colition_points[i].x)) == (int)(round(OBJ_ARR[temp->index]->position->x)) &&
                (int)(round(ship->colition_points[i].y)) == (int)(round(OBJ_ARR[temp->index]->position->y)))
            {
                LIVES = LIVES - 1;

                node *temp_remove = temp;
                temp = temp->next;
                eliminate_obj(&_bombs_head, temp_remove->index);
                colision = 1;

                break;
            }
        }
        if (colision == 1)
        {
            continue;
        }

        if ((OBJ_ARR[temp->index]->position->y >= (double)(LINES)))
        {
            node *temp_remove = temp;
            temp = temp->next;
            eliminate_obj(&_bombs_head, temp_remove->index);
        }
        else
        {
            move_obj(OBJ_ARR[temp->index], mov);
            temp = temp->next;
        }
    }
}
