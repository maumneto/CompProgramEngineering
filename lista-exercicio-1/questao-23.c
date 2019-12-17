/**
 * 23. Faça um programa que leia um valor digitado e calcule o fatorial deste número.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    int valor, i;
    long int fat = 1;
    // entrada de dados
    printf("Digite um valor positivo e inteiro: ");
    scanf("%d", &valor);
    // verificar se o numero é positivo
    if (valor < 0)
    {
        printf("\nNumero Invalido");
    }
        else
    {
        for (i = 1; i <= valor; i++)
        {
            fat = fat*i;
        }
        printf("\nO fatorial de %d eh %ld", valor, fat);
    }
    return 0;
}
