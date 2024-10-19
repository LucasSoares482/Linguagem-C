#include <stdio.h>
#include <malloc.h>

int maain(){
    int* y= (int*) malloc(sizeof(int));

    *y = 20;

    int z = sizeof(int);

    printf("*y=%i z=%i\n", *y, z);

    return 0;
}


//o y acessa indiretamente os valores alocadas (malloc) para outro lugar utilizando o endereço dos valores alocados (malloc)!