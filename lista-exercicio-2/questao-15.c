/**
 * Faça uma função que receba uma matriz 4 x 4 e 
 * retorne quantos valores maiores do que 10 ela possui.
*/
#include <stdio.h>
#include <stdlib.h>

void valores_acima_dez(int *mat, int n)
{   
    int i, j;
    int cont = 0;
    for (i = 0; i < 16; i++)
    {
        if (*(mat+i) > 10)
        {
            cont++;
        }
    }
    printf("O numero de valores acima de 10 é: %d", cont);
}

int main(int argc, char const *argv[])
{
    int matriz[4][4], i, j;
    int *mat = NULL;
    printf("Digite os valores da matriz a seguir!\n");
    // capturando os dados da matriz
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    mat = &matriz[0][0];
    valores_acima_dez(mat, 16);
    printf("\nFim");
    return 0;
}