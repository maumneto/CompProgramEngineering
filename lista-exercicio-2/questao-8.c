/**
 * 8. Faça um algoritmo que receba uma palavra e a imprima de trás-para-frente.
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nome[30];
    int i;
    printf("Digite o nome 1: ");
    scanf("%s", nome);

    for (i = strlen(nome); i >= 0; i--)
    {
        printf("%c", nome[i]);
    }
    return 0;
}