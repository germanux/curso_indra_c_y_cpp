#include "includes.h"

st_lista_asig*  reservar_mem() {
    int cant;
    st_asignatura* ptr_array_asig;
    printf("Introduzca num asig:\n");
    scanf("%d", &cant);
    ptr_array_asig = (st_asignatura*)
            malloc(cant * sizeof(st_asignatura));
    printf("Tam bytes: %d\n",
           cant * sizeof(st_asignatura));

    st_lista_asig *ptr_lista_asig;
    ptr_lista_asig = malloc(sizeof(st_lista_asig));
    ptr_lista_asig->cant = cant;
    ptr_lista_asig->asignaturas = ptr_array_asig;

    return ptr_lista_asig;
}
void rellenar_lista_asig(st_lista_asig *lista_asig) {
    for (int i = 0; i < lista_asig->cant; i++) {
        rellenar_asig(& lista_asig->asignaturas[i]);
        //rellenar_asig(lista_asig->asignaturas + i);
    }
}
void mostrar_lista_asig(st_lista_asig *lista_asig) {
    printf("%d Asignaturas:\n", (*(lista_asig)).cant);
    for (int i = 0; i < lista_asig->cant; i++) {
        mostrar_asig( *(lista_asig->asignaturas + i));
        //mostrar_asig( lista_asig->asignaturas[i]);
    }
}
