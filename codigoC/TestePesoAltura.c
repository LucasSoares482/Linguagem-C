#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

//estrutura com variaveis inteiras nomeadas de "PesoAltura"
typedef struct{
    int peso; //peso em quilogramas
    int altura; //altura em centimetros
}PesoAltura;

//estrutura de uso da estrutura "PesoAltura"
int main(){

    //Aloca dinamicamente memória suficiente para armazenar uma estrutura do tipo PesoAltura.
    
    //O resultado da alocação é armazenado no ponteiro pessoa1.
    PesoAltura* pessoa1=(PesoAltura*)malloc(sizeof(PesoAltura));

    //pessoa1->peso = 80;: Atribui o valor 80 ao membro peso da estrutura apontada por pessoa1.
    pessoa1->peso=80;

    //pessoa1->altura = 185;: Atribui o valor 185 ao membro altura da estrutura apontada por pessoa1.
    pessoa1->altura=185;

    //printf("Peso: %i, Altura: %i.\n", pessoa1->peso, pessoa1->altura);: Imprime na tela o peso e a altura da pessoa.
    printf("Peso: %i, Altura: %i.\n",pessoa1->peso,pessoa1->altura);

    //if (pessoa1->altura > alturaMaxima) ...: Verifica se a altura da pessoa é maior que a altura máxima permitida.

    //Imprime uma mensagem indicando se a altura está acima ou abaixo do limite.
    if (pessoa1->altura>alturaMaxima)printf("Altura acima da maxima.\n");


    else printf("Altura abaixo da maxima.\n");
}

