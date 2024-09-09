//
// Created by 18137 on 29/08/2024.
//

#include "save_local.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bomb.h"
#include "enemies.h"
#include "objects.h"
#include "ship.h"
#include "NF_Mem_Manager.h"
#include "stats.h"

// Función para guardar la lista enlazada en un archivo
void saveLinkedList(node* head, const char* filename)
{
    FILE* file = fopen(filename, "wb");
    if (!file)
    {
        perror("Failed to open file for writing");
        return;
    }

    node* current = head;
    while (current)
    {
        Object* obj = OBJ_ARR[current->index]; // Obtener el objeto usando el índice

        // Guardar los datos del objeto en el archivo
        fwrite(obj->position, sizeof(Point), 1, file);
        int title_len = strlen(obj->title) + 1;
        fwrite(&title_len, sizeof(int), 1, file);
        fwrite(obj->title, sizeof(char), title_len, file);

        // Guardar el diseño
        fwrite(&obj->model_size, sizeof(int), 1, file);
        for (int i = 0; i < obj->model_size; i++)
        {
            int design_len = strlen(obj->design[i]) + 1;
            fwrite(&design_len, sizeof(int), 1, file);
            fwrite(obj->design[i], sizeof(char), design_len, file);
        }

        fwrite(&obj->type, sizeof(enum object_type), 1, file);
        fwrite(&obj->life, sizeof(int), 1, file);
        fwrite(&obj->color, sizeof(int), 1, file);
        fwrite(&obj->last_dir, sizeof(mov_dir), 1, file);
        fwrite(&obj->col_points_amount, sizeof(int), 1, file);
        fwrite(obj->colition_points, sizeof(Point), obj->col_points_amount, file);

        current = current->next;
    }
    fclose(file);
}

void save_stats(void)
{
    FILE* file = fopen("stats.bin", "wb");
    if (!file)
    {
        perror("Failed to open file for writing");
        return;
    }
    fwrite(&SCORE, sizeof(int), 1, file);
    fwrite(&LIVES, sizeof(int), 1, file);
    fwrite(&ENEMY_LAND, sizeof(int), 1, file);
    fclose(file);
}

// Función para cargar la lista enlazada desde un archivo
void loadLinkedList(const char* filename)
{
    FILE* file = fopen(filename, "rb");
    if (!file)
    {
        perror("Failed to open file for reading");
        return;
    }

    // node* head = NULL;
    // node* tail = NULL;

    while (!feof(file))
    {
        Object* obj = malloc(sizeof(Object));
        obj->position = (Point*)malloc(sizeof(Point));
        fread(obj->position, sizeof(Point), 1, file);

        int title_len;
        fread(&title_len, sizeof(int), 1, file);
        obj->title = (char*)malloc(title_len * sizeof(char));
        fread(obj->title, sizeof(char), title_len, file);

        fread(&obj->model_size, sizeof(int), 1, file);
        obj->design = (char**)malloc(obj->model_size * sizeof(char*));
        for (int i = 0; i < obj->model_size; i++)
        {
            int design_len;
            fread(&design_len, sizeof(int), 1, file);
            obj->design[i] = (char*)malloc(design_len * sizeof(char));
            fread(obj->design[i], sizeof(char), design_len, file);
        }

        fread(&obj->type, sizeof(enum object_type), 1, file);
        fread(&obj->life, sizeof(int), 1, file);
        fread(&obj->color, sizeof(int), 1, file);
        fread(&obj->last_dir, sizeof(mov_dir), 1, file);

        fread(&obj->col_points_amount, sizeof(int), 1, file);
        obj->colition_points = (Point*)malloc(obj->col_points_amount * sizeof(Point));
        fread(obj->colition_points, sizeof(Point), obj->col_points_amount, file);

        add_Object(obj);

        // node* newNode = create_node(obj);
        // if (!head)
        // {
        //     head = newNode;
        //     tail = newNode;
        // }
        // else
        // {
        //     tail->next = newNode;
        //     tail = newNode;
        // }
    }
    fclose(file);
    // return head;
}

void load_stats(void)
{
    FILE* file = fopen("stats.bin", "rb");
    if (!file)
    {
        perror("Failed to open file for reading");
        return;
    }
    fread(&SCORE, sizeof(int), 1, file);
    fread(&LIVES, sizeof(int), 1, file);
    fread(&ENEMY_LAND, sizeof(int), 1, file);
    fclose(file);
}

void save_game(void)
{
    saveLinkedList(_enemies_head, "enemies_save.bin");
    saveLinkedList(_bullet_head, "bullets_head.bin");
    saveLinkedList(_bombs_head, "bomb_head.bin");
    free_all();
    save_stats();
}

void load_game(void)
{
    load_stats();
    loadLinkedList("enemies_save.bin");
    loadLinkedList("bullets_head.bin");
    loadLinkedList("bomb_head.bin");
}
