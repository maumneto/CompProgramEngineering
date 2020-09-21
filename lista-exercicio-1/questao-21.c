/**
 * 21.	Escreva um programa que leia um número inteiro maior que zero e retorne a soma de todos os algarismos. 
 * Por exemplo: ao número 251 corresponderá o valor 8 (2+5+1). 
 * Se o número lido não for maior do que zero, programa terminará com a mensagem “número inválido”. 
 * Nota: para facilitar, limita-se o no máximo de 3 casas decimais.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    int valor, soma = 0.0;
    // entrada de dados
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);
    // verificar se o numero é positivo
    if (valor < 0)
    {
        printf("\nNumero Invalido!");
    } 
        else
    {
        // logica para fazer a soma dos algarismos de um numero digitado
        while (valor > 0)
        {
            soma = soma + (valor%10);
            valor = (int) valor / 10;
        }
        printf("\nA soma dos algarismos eh: %d", soma);
    }
    return 0;
}
