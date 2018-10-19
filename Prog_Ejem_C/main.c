#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Prog_Ejem_1/fun_tipos.h"
#include "mem_dinam.h"
#include "ges_alumnos.h"

int main()
{
    ges_alumnos();
    /*printf("Hola desde C!\n");
    int dup = duplicar(5);
    printf("Dup = %d\n", dup);
    tipos_datos();
    arrays();*/
    return 0;
}
void reservar_a_lo_bestia() {
    for (unsigned int i = 0; i < 10000000; i++)
    {
        impr_texto();
    }
}
void impr_texto() {
    //fun_mem("Un tex\0to");
    int tam = 50;
    char* ptr_texto = (char*) malloc(tam * sizeof(char));
    strcpy(ptr_texto, "Otro texto\nLargo");
    //fun_mem(ptr_texto);
    // free(ptr_texto);
}

