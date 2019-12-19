/**
 * 2. Faça um algoritmo que leia um vetor de 10 posições. 
 * Contar e escrever quantos valores pares ele possui.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor de indice %d : ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("Valor = %d de indice %d eh par\n", vetor[i], i+1);
        }
    }
    return 0;
}
