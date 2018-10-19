#include <stdio.h>
#include <stdlib.h>
#include "mem_dinam.h"

void fun_mem(char* miArray) {
    int i = 0;
    while (i < 10) {
        printf("char %d = %c - %d \n", i, *(miArray+i), miArray[i]);
        i++;
    }
    printf("Texto = %s\n", miArray);
}
