#ifndef LISTA_ASIGNATURAS_H_INCLUDED
#define LISTA_ASIGNATURAS_H_INCLUDED

#include "includes.h"

typedef struct {
    int cant;
    st_asignatura* asignaturas;
} st_lista_asig;

st_lista_asig*  reservar_mem();
void rellenar_lista_asig(st_lista_asig *lista_asig);
void mostrar_lista_asig(st_lista_asig *lista_asig) ;


#endif // LISTA_ASIGNATURAS_H_INCLUDED
