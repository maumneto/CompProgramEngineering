/**
 * 4. Faça um algoritmo que leia uma matriz 4 x 4, imprima a matriz 
 * e retorne a localização (linha e a coluna) do maior valor.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4], i, j, maior, colM, linM;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o elemento M[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
                linM = i;
                colM = j;
            }
        }
    }
    printf("O maior elemento eh = %d que esta na linha %d e coluna %d", maior, linM, colM);
    return 0;
}
