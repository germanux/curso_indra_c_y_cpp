
int duplicar(int x) {
    return x * 2 + 1;
}
void tipos_datos() {
    char car = 'A';
    char carC = 67;
    int  carD = 68;
    float decimal = 1.23456789123456789123;
    double decDoble = 1.23456789123456789123D;
    unsigned long largo=5000000000;
    int*  ptr_ent;
    int  ptr_decimal;
    ptr_ent = &carD;
    ptr_decimal = &decimal;

    printf("caracteres: \n");
    printf(" %d - %c - %d - %c\n",
           car, carC, carC - car, carD);
    printf("%f - %9.20Lf \n", decimal, decDoble);
    printf("%u\n", largo);

    printf("Pos mem: %d, %d, %d, %d, %d, %d, %d\n",
           &car, &carC, ptr_ent, &largo,
           ptr_decimal, &decDoble, &ptr_ent);
}

void arrays() {
    int array[5];
    int *ptr_ent = array; //& array[0];
    for (int i = 0; i < 5; i++) {
        array[i] = i * 3 + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d \n", array[i]);
    }
    printf("pos mem = %d \n", ptr_ent);
    printf("valor en mem = %d \n", *ptr_ent);
    printf("valor mem 2 = %d \n", *(ptr_ent + 1));
    printf("valor mem 3 = %d \n", ptr_ent[2]);
}
