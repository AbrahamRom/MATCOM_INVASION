//
// Created by 18137 on 29/08/2024.
//

#include "bullets_p_c.h"
#include "objects.h"
#include "ship.h"
#include <unistd.h>
#include "NF_Mem_Manager.h"

void* productor(void* arg)
{
    while (1)
    {
        sleep(1); // Espera 1 segundo
       // sem_wait(&sem); // Espera a obtener el semáforo
        pthread_mutex_lock(&lock);

        if (variable < MAX_VALUE)
        {
            variable++;
        }
        pthread_mutex_unlock(&lock);
        //sem_post(&sem); // Libera el semáforo
        sleep(1); // Espera 1 segundo
        if (stop_thread)
        {
            break;
        }
    }
    return NULL;
}

void* consumidor(Object* ship)
{
    //sem_wait(&sem); // Espera a obtener el semáforo
    pthread_mutex_lock(&lock);
    if (variable > 0)
    {
        variable--;
        // Y DISPARO
        Object* bullet = create_bullet(ship->position);
        add_Object(bullet);
    }
    pthread_mutex_unlock(&lock);
    //sem_post(&sem); // Libera el semáforo

    return NULL;
}
