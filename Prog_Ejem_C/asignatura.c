#include "includes.h"

void rellenar_asig(st_asignatura* asig) {
    printf("Asignatura: Nombre?\n");
    scanf("%s", asig->nombre);
    printf("Examenes?\n");
    scanf("%d", &asig->examenes);
}
void mostrar_asig(st_asignatura asig) {
    printf("Asignatura %s (%d examenes)\n",
           asig.nombre, asig.examenes);
}
