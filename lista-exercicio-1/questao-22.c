/**
 * Na matemática, o número harmônico designado por H(n) define-se como sendo a soma da série harmônica:
        a.	H(n) = 1 + 1/2 + 1/3 + .... 1/n
    Faça um programa que leia um valor de n inteiro e positivo e apresente o valor de H(n).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    int numero, i;
    float soma = 0.0;
    // entrada de dados
    printf("Digite o numero de termos da serie harmonica: ");
    scanf("%d", &numero);
    // verificar se o número é positivo.
    if (numero < 0)
    {
        printf("Numero Invalido!");
    }
        else
    {
        // somatório dos elementos da serie
        for (i = 1; i <= numero; i++)
        {
            soma = soma + (1/i);
        }
        // saida de dados
        printf("\nO total de H(n) = %.2f", soma);
    }
    return 0;
}
