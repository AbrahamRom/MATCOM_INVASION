//
// Created by 18137 on 03/09/2024.
//

#include "NF_linkedlist.h"

#include <stddef.h>
#include <stdlib.h>
#include <curses.h>

#include "NF_Mem_Manager.h"
#include "objects.h"

// Función para crear un nuevo nodo
node *create_node(int index)
{
    node *new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL)
    {
        printw("Error al asignar memoria");
        return NULL;
    }
    new_node->index = index;
    new_node->next = NULL;
    return new_node;
}

// Función para agregar un nodo al final de la lista
void add_node(node **head, int index)
{
    if (index < 0 || index > 99)
    {
        printw("Index out of range exception.\n");
        return;
    }

    node *new_node = create_node(index);
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// Función para eliminar un nodo específico
void delete_node(node **head, int index)
{
    if (*head == NULL)
        return;

    node *temp = *head;
    node *prev = NULL;

    // Si el nodo a eliminar es el primero
    if (temp != NULL && temp->index == index)
    {
        *head = temp->next; // Cambia el head
        free(temp);         // Libera la memoria
        return;
    }

    // Busca el nodo a eliminar
    while (temp != NULL && temp->index != index)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp != NULL && temp->next == NULL )
    {
        prev->next = NULL;
        free(temp);
        return;
    }

    // Si no se encontró el nodo
    if (temp == NULL)
        return;

    // Desvincula el nodo de la lista
    prev->next = temp->next;
    free(temp); // Libera la memoria
}

// Función para liberar toda la lista
void _free_list(node **head)
{
    node *current = *head;
    node *next;

    while (current != NULL)
    {
        next = current->next; // Guarda el siguiente nodo
        free(current);        // Libera el nodo actual
        current = next;       // Avanza al siguiente nodo
    }

    *head = NULL; // Asegura que el head sea NULL después de liberar
}

// Función para imprimir la lista
void _print_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        print_obj(OBJ_ARR[temp->index]); // Imprime el objeto en la posicion de OBJ_ARR del index del nodo
        temp = temp->next;
    }
}

void _move_obj_from_list(node *head, mov_dir mov)
{
    node *temp = head;
    while (temp != NULL)
    {
        move_obj(OBJ_ARR[temp->index], mov);
        temp = temp->next;
    }
}
