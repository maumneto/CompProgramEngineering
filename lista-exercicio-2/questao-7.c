/**
 * 7. Faça um algoritmo que compara duas strings (não use a função strcmp).
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome1[10], nome2[10];
    int i, valor;
    printf("Digite o nome 1: ");
    scanf("%s", nome1);
    printf("\nDigite o nome 2: ");
    scanf("%s", nome2);

    for (i = 0; i < 10; i++)
    {
        if (nome1[i] != nome2[i])
        {
            printf("\nAs strings sao diferentes!");
            valor = -1;
        }
    }
    if (valor != -1)
    {
        printf("\nAs strings sao iguais!");
    }
    return 0;
}
