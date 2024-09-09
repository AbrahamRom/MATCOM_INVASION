#ifndef BOMB_H
#define BOMB_H


#include <math.h>
#include "enemies.h"
#include "NF_linkedlist.h"
#include "NF_Mem_Manager.h"

int TIMER_LIMIT;
#define PROBABILITY 0.05

//Node* bomb_head;

node* _bombs_head;


void bombs_deployment(void);
void move_bombs(Object *ship);
void print_bombs(void);
void remove_node_bomb(int index);

#endif //BOMB_H
