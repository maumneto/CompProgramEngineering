/**
 * 1. Faça um algoritmo que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[6], i;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor de indice %d : ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf("Valor = %d\n", vetor[i]);
    }
    return 0;
}
