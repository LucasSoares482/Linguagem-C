#include <stdio.h>

int main(){
    int x=25;

    int* y = &x; //o y referencia o x trazendo seus valores e usando tambem seu BLOCO DE ARMAZENAMENTO.

    *y=30; // x=30. x recebe um valor novo assim como y. o y utiliza não usa apenas os dados de x mas usa seu bloco de armazenamento dos dados assim podendo mudar seus valores diretamente tambem.

    //entrega o valor de X
    printf("Valor atual de x: %i\n",x);

    //entrega o valor de Y
    printf("Valor atual de y: %i\n",*y);

    //retorna um endereço de armazenamento dos dados de x e y
    printf("Valor do ponteiro: %p\n",x);
    printf("Valor do ponteiro: %p\n",y);

    return 0;
}