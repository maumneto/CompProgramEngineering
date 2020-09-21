/**
 * 3. Faça um algoritmo que receba do usuário um vetor com 10 posições.
 * Em seguida deverá ser impresso o maior e o menor elemento do vetor.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[10], i, maior, menor;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor de indice %d : ", i+1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for (i = 0; i < 10; i++)
    {
        if(maior < vetor[i])
        {
            maior = vetor[i];
        }
        if (menor > vetor[i])
        {
            menor = vetor[i];
        }
    }
    printf("O maior valor do vetor = %d\n", maior);
    printf("O menor valor do vetor = %d", menor);
    return 0;
}
