//
// Created by 18137 on 16/08/2024.
//

#include "enemies.h"
#include <stddef.h>
#include <math.h>
#include <strings.h>

#include "objects.h"
#include "curses.h"
#include "ship.h"
#include "NF_Mem_Manager.h"
#include "stats.h"

char* e1_title = "nibbler";
char* e1_model[] = {
    "   /\\",
    " :<[o]>:",
    "   \\/"
};

char* e2_title = "pip";
char* e2_model[] = {
    "/\\",
    "\\/"
};

char* e3_title = "richie";
char* e3_model[] = {
    "[x]"
};

Object* create_enemie(char* title, Point start, char* design[], int model_size)
{
    Object* obj = make_obj(title, design, start, enemie, model_size, 0, 0);

    switch (model_size)
    {
    case 3:
        obj->last_dir.x_dir = 0.1;
        obj->last_dir.y_dir = 0;
        obj->color = 2;
        break;
    case 2:
        obj->last_dir.x_dir = 0.01;
        obj->last_dir.y_dir = 0.01;
        obj->color = 3;
        break;

    case 1:
        obj->last_dir.x_dir = 0;
        obj->last_dir.y_dir = 0.02;
        obj->color = 1;
        break;
    default:
        obj->last_dir.x_dir = 0.1;
        obj->last_dir.y_dir = 0;
        break;
    }
    return obj;
}

/*void append_node_enemie(Object *obj)
{
    Node *newNode = create_node(obj);
    if (enemies_head == NULL)
    {
        enemies_head = newNode;
        return;
    }
    Node *temp = enemies_head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}*/

void print_enemies(void)
{
    if (_enemies_head != NULL)
    {
        _print_list(_enemies_head);
    }
}

/*void remove_node_enemie(Node *node)
{
    if (enemies_head == node)
    {
        enemies_head = node->next; // global
        free_node(node);
        return;
    }
    Node *head = enemies_head;
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        if (head == node)
        {
            temp->next = head->next;
            free_node(head);
            return;
        }
    }
}*/

// void remove_node_enemie(int index)
// {
//     delete_node(&_enemies_head, index);
//     free_Object(index);
// }
//
void create_enemies_group(int count)
{
    double x = 3;
    double y = 3;
    Point point = {.x = x, .y = y};
    int model_size = 1;
    for (int i = 0; i < count; i++)
    {
        model_size = rand() % 3 + 1;

        Object* enemie;

        switch (model_size)
        {
        case 3:
            enemie = create_enemie(e1_title, point, e1_model, 3);
            break;
        case 2:
            enemie = create_enemie(e2_title, point, e2_model, 2);
            break;
        case 1:
            enemie = create_enemie(e3_title, point, e3_model, 1);
            break;
        default:
            enemie = create_enemie(e3_title, point, e3_model, 1);
            break;
        }
        add_Object(enemie);

        point.x = (double)(rand() % (COLS - 15) + 3); // POSIBLE CAMBIO
    }
}

int pass_limit()
{
    int count = 0;
    node* temp = _enemies_head;
    while (temp->next != NULL)
    {
        Object* obj = OBJ_ARR[temp->index]; // duda no se si este bien
        count++;
        if (obj->position->y < (double)10) // POSSIBLE CHANGE
        {
            return false;
        }
        temp = temp->next;
    }
    return true;
}

void enemies_deployment(void)
{
    int c;
    if (_enemies_head == NULL)
    {
        create_enemies_group(MAX_ENEMIES_COUNT / 4);
    }
    else if ((c = pass_limit()) > 0) // POSIBLEMENTE MAL
    {
        int x = MAX_ENEMIES_COUNT - c;
        int y = MAX_ENEMIES_COUNT / 4;
        create_enemies_group((x < y) ? x : y);
    }
}

void move_enemies(void)
{
    node* temp = _enemies_head;

    while (temp != NULL)
    {
        Object* obj = OBJ_ARR[temp->index]; // duda no se si este bien
        mov_dir mov = obj->last_dir;
        if (obj->position->y >= (double)LINES - obj->model_size)
        {
            node* temp_remove = temp;
            temp = temp->next;
            eliminate_obj(&_enemies_head, temp_remove->index);
            ENEMY_LAND = 1;
            continue;
        }
        else
        {
            switch (obj->model_size)
            {
            case 3:
                if (obj->position->x >= (double)(COLS - 10) && obj->last_dir.x_dir == 0.1)
                {
                    obj->last_dir.x_dir = (double)0;
                    obj->last_dir.y_dir = (double)1;
                    mov.y_dir = (double)1;
                    mov.x_dir = (double)0;
                }
                else if (obj->position->x <= (double)5 && obj->last_dir.x_dir == -0.1)
                {
                    obj->last_dir.x_dir = (double)0;
                    obj->last_dir.y_dir = (double)1;
                    mov.y_dir = (double)1;
                    mov.x_dir = (double)0;
                }
                else if (obj->position->x <= (double)5 && obj->last_dir.y_dir == (double)1)
                {
                    obj->last_dir.x_dir = 0.1;
                    obj->last_dir.y_dir = (double)0;
                    mov.x_dir = 0.1;
                    mov.y_dir = (double)0;
                }
                else if (obj->position->x >= (double)(COLS - 10) && obj->last_dir.y_dir == (double)1)
                {
                    obj->last_dir.x_dir = -0.1;
                    obj->last_dir.y_dir = (double)0;
                    mov.x_dir = -0.1;
                    mov.y_dir = (double)0;
                }
                break;
            case 2:
                if (obj->position->x >= (double)(COLS - 5) && obj->last_dir.x_dir == 0.01)
                {
                    obj->last_dir.x_dir = (double)-0.01;
                    mov.x_dir = (double)-0.01;
                }
                else if (obj->position->x <= (double)5 && obj->last_dir.x_dir == -0.01)
                {
                    obj->last_dir.x_dir = (double)0.01;
                    mov.x_dir = (double)0.01;
                }
                break;
            default:
                break;
            }
        }
        move_obj(obj, mov);
        temp = temp->next;
    }
}


void validate_colition(void)
{
    node* current_enemie = _enemies_head;
    while (current_enemie != NULL)
    {
        int muerte = 0;
        node* current_bullet = _bullet_head;
        Object* obj_enemie = OBJ_ARR[current_enemie->index]; // duda no se si este bien

        while (current_bullet != NULL)
        {
            Object* obj_bullet = OBJ_ARR[current_bullet->index]; // duda no se si este bien
            for (int i = 0; i < obj_enemie->col_points_amount; i++)
            {
                if ((int)(round(obj_enemie->colition_points[i].x)) == (int)(round(obj_bullet->position->x)) &&
                    (int)(round(obj_enemie->colition_points[i].y)) == (int)(round(obj_bullet->position->y)))
                {
                    switch (obj_enemie->model_size)
                    {
                    case 3:
                        SCORE += 10;
                        break;
                    case 2:
                        SCORE += 5;
                        break;
                    case 1:
                        SCORE += 3;
                        break;

                    default:
                        break;
                    }
                    node* temp_remove_bullet = current_bullet;
                    current_bullet = current_bullet->next;
                    eliminate_obj(&_bullet_head, temp_remove_bullet->index);

                    node* temp_remove_enemie = current_enemie;
                    current_enemie = current_enemie->next;
                    eliminate_obj(&_enemies_head, temp_remove_enemie->index);
                    muerte = 1;

                    break;
                }
            }
            if (muerte == 0)
            {
                current_bullet = current_bullet->next;
            }
        }
        if (muerte == 0)
        {
            current_enemie = current_enemie->next;
        }
    }
}
