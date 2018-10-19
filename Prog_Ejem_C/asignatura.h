#ifndef ASIGNATURA_H_INCLUDED
#define ASIGNATURA_H_INCLUDED

#include "includes.h"

typedef struct  {
    char nombre[20];
    int examenes;
} st_asignatura;

void rellenar_asig(st_asignatura* asig);
void mostrar_asig(st_asignatura asig);

#endif // ASIGNATURA_H_INCLUDED
