/**
 * 8.	Faça um programa que receba dois números e mostre qual deles é o maior.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    float a, b;
    // entrada de dados
    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("\nDigite outro numero: ");
    scanf("%f", &b);
    // logica para saber o maior valor
    if (a > b)
    {
        printf("\nO valor %.2f eh maior", a);
    } else {
        printf("\nO valor %.2f eh maior", b);
    }
    return 0;
}
