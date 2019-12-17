/**
 * 12.	Faça um programa que receba a altura e o sexo de uma pessoa. 
 * Calcule e mostre seu peso ideal utilizando as seguintes fórmulas:
    a.	Homens: (72.7*h) – 58
    b.	Mulheres: (62.1*h) – 44.7
*/
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    float alt, pesoIdeal;
    char genero;
    // entrada de dados
    printf("Digite seu genero:\nH-homem e M-mulher: ");
    scanf("%c", &genero);
    genero = toupper(genero); // converte o caractere digitado em uppercase
    switch (genero)
    {
    case 'H':
        pesoIdeal = (72.7*alt) - 58;
        printf("O peso ideal eh: %.2f", pesoIdeal);
        break;
    case 'M':
        pesoIdeal = (62.1*alt) - 44.7;
        printf("O peso ideal eh: %.2f", pesoIdeal);
        break;
    default:
        printf('Opcao Invalida!');
        break;
    }
    return 0;
}
