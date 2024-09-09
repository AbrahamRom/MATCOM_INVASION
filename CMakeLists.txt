cmake_minimum_required(VERSION 3.30)
project(MATCOM_INVADERS C)

set(CMAKE_C_STANDARD 11)

add_executable(MATCOM_INVADERS main.c
        menu.c
        ship.c
        ship.h
        print_frame.c
        print_frame.h
        enemies.c
        bomb.c
        bullets_p_c.h
        bullets_p_c.c
        NF_linkedlist.c
        save_local.c
        save_local.c
)
