#include "ges_alumnos.h"

void ges_alumnos() {
    st_lista_asig* ptr_lista_asig;
    ptr_lista_asig = reservar_mem();
    printf("ptr_asig = %d\n", ptr_lista_asig);

    rellenar_lista_asig(ptr_lista_asig);
    mostrar_lista_asig(ptr_lista_asig);

    free (ptr_lista_asig);
}
