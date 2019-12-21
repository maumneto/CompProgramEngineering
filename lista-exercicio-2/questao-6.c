/**
 * 6. Faça um algoritmo que leia uma matriz de 3 x 3 elementos. 
 * Calcule a soma dos elementos que estão acima na diagonal principal.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, soma, matriz[3][3];
    soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento M[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i < j)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("O somatório dos elementos da diagonal principal eh: %d", soma);
    return 0;
}
