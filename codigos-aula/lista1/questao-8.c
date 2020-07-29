/**
 * Escreva um programa que leia um número inteiro positivo N do usuário e, em seguida, 
 * exiba a soma de todos os números inteiros e positivos de 1 a N. 
 * Nota:  a soma dos primeiros N números inteiros positivos pode ser calculado usando a fórmula.
 * entrada de dados -> inteiro positivo N
 * processamento -> soma = n*(n+1)/2
 * saida de dados -> inteiro e positivo
 * 
*/

#include <stdio.h>

int main()
{
    // criar as variaveis
    int valor, res;
    // entrada de dados
    printf("Entre com um valor inteiro e positivo: ");
    scanf("%d", &valor);
    // processamento
    res = valor*(valor+1)/2;
    // saida de dados
    printf("O resultado da soma dos N valores positivos de %d é %d", valor, res);
    return 0;
}
