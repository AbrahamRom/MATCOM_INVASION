//
// Created by 18137 on 03/09/2024.
//

#ifndef NF_LINKEDLIST_H
#define NF_LINKEDLIST_H

//Implemtation of Next Fit memory manage

typedef struct node
{
    int index;
    struct node* next;
}node;

void add_node(node** head, int index);
void delete_node(node** head, int index);
void _print_list(node* head);
void _free_list(node **head);

#endif //NF_LINKEDLIST_H
