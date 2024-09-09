#ifndef SHIP_H
#define SHIP_H

#include <ncurses.h>

#include "NF_linkedlist.h"
#include "objects.h"

#include "NF_Mem_Manager.h"

//Node* bullet_head;
node* _bullet_head;

Object* player_ship;

Object* create_ship(void);
void shot(int ch, MEVENT event, Object* ship);
void print_shot(void);
//void remove_node_bullet(int index);
Object* create_bullet(Point* ship_position);
//void append_node_bullet(Object* obj);

#endif //SHIP_H
