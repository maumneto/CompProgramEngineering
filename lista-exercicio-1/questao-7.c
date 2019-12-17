/**
 * 7.	Faça um programa que leia quatro números e 
 * calcule a média aritmética e, posteriormente, imprima o resultado.
*/
#include <stdio.h>

int main (){
    // variaveis locais
    int a, b, c, d;
    float media;
    // entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);
    printf("\nDigite o quarto valor: ");
    scanf("%d", &d);
    // calculo da media aritmetica
    media = (a + b + c + d)/4;
    // saida de dados
    printf("\nO resultado da media: %.2f", media);
    return 0;
}