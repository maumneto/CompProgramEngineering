/**
 * 10.	Faça um programa que leia um número digitado e diga se este número é par ou ímpar.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variavel local
    int valor;
    // entrada de dados
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    // logica para saber se um numero é par ou ímpar
    if (valor % 2 == 0)
    {
        printf("O valor digitado é par");
    } 
        else
    {
        printf("O valor digitado é impar");
    }
    return 0;
}
