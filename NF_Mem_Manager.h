//
// Created by 18137 on 03/09/2024.
//

#ifndef NF_MEM_MANAGER_H
#define NF_MEM_MANAGER_H
#include "NF_linkedlist.h"
#include "objects.h"

#define AMOUNT_OBJ 100

Object** OBJ_ARR;
int current_i;

void add_Object(Object* obj);
void free_Object(int index);
void eliminate_obj(node** head, int index);
void free_OBJ_ARR();
void free_all();

#endif //NF_MEM_MANAGER_H
