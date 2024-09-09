//
// Created by 18137 on 03/09/2024.
//

#include "NF_Mem_Manager.h"
#include "NF_linkedlist.h"
#include <curses.h>
#include <stdlib.h>
#include "ship.h"
#include "bomb.h"
#include "objects.h"

void create_OBJ_ARR(void)
{
    OBJ_ARR = malloc(AMOUNT_OBJ * sizeof(Object*));
    if (OBJ_ARR == NULL)
    {
        printw("Error al asignar memoria");
        return;
    }
    for (int i = 0; i < AMOUNT_OBJ; ++i)
    {
        OBJ_ARR[i] = NULL;
    }
}

void free_Object(int index)
{
    if (index < 0 || index >= AMOUNT_OBJ)
    {
        printw("Index out of range exception"); //Error si se sale del rango del array
        return;
    }
    if(OBJ_ARR[index]!=NULL)
    {
        free_obj(OBJ_ARR[index]); //Libera el objeto
        OBJ_ARR[index] = NULL; //Hace Null la referencia para evitar errores
    }
}

void free_OBJ_ARR()
{
    for (int i = 0; i < AMOUNT_OBJ; ++i)
    {
        if (OBJ_ARR[i] != NULL)
        {
            free_obj(OBJ_ARR[i]); //Libera el objeto
            OBJ_ARR[i] = NULL; //Hace Null la referencia para evitar errores
        }
    }
}


int next_i()
{
    current_i++;
    if (current_i == AMOUNT_OBJ)
    {
        return 0;
    }
    return current_i;
}

void add_Object(Object* obj)
{
    while (OBJ_ARR[next_i()] != NULL)
    {
        continue;
    }
    OBJ_ARR[current_i] = obj;
    switch (obj->type)
    {
    case e_bullet:
        add_node(&_bombs_head, current_i);

        break;
    case s_bullet:
        add_node(&_bullet_head, current_i);

        break;
    case enemie:
        add_node(&_enemies_head, current_i);
        break;

    default:
        break;
    }
}

void eliminate_obj(node** head, int index)
{
    delete_node(head,index);
    free_Object(index);
}
void free_all()
{
    _free_list(&_bombs_head);
    _free_list(&_bullet_head);
    _free_list(&_enemies_head);
    free_OBJ_ARR();
}
