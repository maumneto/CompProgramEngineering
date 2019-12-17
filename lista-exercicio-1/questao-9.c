/**
 * 9.	Faça um programa que leia um número e, caso seja positivo, calcule e mostre:
        a.	O quadrado do número digitado
        b.	A raiz quadrada do número
*/

// Nesta questao será usada a biblioteca math.h
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // variavel local
    int valor, quad;
    float raiz;
    // entrada de dados
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &valor);
    // verificacao se o valor é positivo
    if (valor < 0)
    {
        printf("\nO valor digitado foi negativo!");
    } else
    {
        quad = valor * valor; // também é possível usar a funcao 'pow' da biblioteca math
        printf("\nQuadrado do numero: %d", quad);
        raiz = sqrt(valor); // funcao da biblioteca math.h
        printf("\nQuadrado do numero: %.2f", raiz);
    }
    return 0;
}
