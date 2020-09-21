/**
 * 3.	Faça um programa em que o usuário digite três números e imprima a soma deles.
*/
#include <stdio.h>

int main (){
    // variaveis locais
    int a, b, c, soma;
    // entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);
    // calculo da soma
    soma = a + b + c;
    // saida de dados
    printf("\nO resultado da soma: %d", soma);
    return 0;
}