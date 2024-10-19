#include <stdio.h>
#define alturaMaxima 225

//estrutura com variaveis inteiras nomeadas de "PesoAltura"
typedef struct{
    int peso;
    int altura;
}PesoAltura;

//estrutura de uso da estrutura "PesoAltura"
int main(){
    PesoAltura pessoa1; //cria um objeto para a estrutura

    //passa informações para as variaveis utilizando objeto criado.
    pessoa1.peso=80;
    pessoa1.altura=185;

    //imprimi informações do objeto organizados sequencialmente. %i : dados da variavel. pessoa1.peso,pessoa1.altura: organização de sobre quais dados serão imprimidos sendo primeiro o peso e depois altura.
    printf("Peso: %i, Altura: %i.\n",pessoa1.peso,pessoa1.altura);

    //verifica se a altura da pessoa é maior que o valor da constante alturaMaxima (250) como se fosse um limite.
    if (pessoa1.altura>alturaMaxima)printf("Altura acima da maxima.\n");

    //caso o valor da altura seja maior que a constante (alturaMaxima 225) ele ira dar esta mensagem 
    else printf("Altura abaixo da maxima.\n");
}

