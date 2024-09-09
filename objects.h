#ifndef OBJECTS_H
#define OBJECTS_H
#include "NF_Mem_Manager.h"

typedef struct Point
{
    /* A point structure for saving the characters and cordinate of an object*/
    double x, y;
} Point;

enum object_type { ship, s_bullet, enemie, e_bullet };

typedef struct movement_direction
{
    double x_dir;
    double y_dir;
} mov_dir;

typedef struct Object
{
    Point* position; //Position point
    char* title; //name of obj
    char** design; //string that represents de obj
    enum object_type type; //the type of the objec, ship, enemy, bullet...etc
    int life; // when it reaches 0 the obj is dead
    int model_size;
    mov_dir last_dir;
    Point* colition_points;
    int col_points_amount;
    int color;
    int timer;
} Object;

Object* make_obj(char* title, char* design[], Point start, enum object_type, int model_size, int color, int timer);
void free_obj(Object* obj);
void print_obj(Object* obj);
void move_obj(Object* obj, mov_dir mov_dir);

#endif //OBJECTS_H
