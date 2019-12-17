/**
 * 20.	Faça um programa que calcule a diferença entre a soma dos 
 * quadrados dos primeiros 10 números naturais e o quadrado da soma. 
 * Ex: a soma dos quadrados dos dez primeiros números naturais é: 1ˆ2+ + 2ˆ2 + ... + 10ˆ2 = 385
 * O quadrado da soma dos dez primeiros números naturais é: (1 + 2 + ... + 10)2 = 552 = 3025
 * A diferença entre a soma dos quadrados dos dez primeiros números 
 * naturais e o quadrado da soma é: 3025 – 385 = 2640.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    int i, valor = 10;
    float somaQuad = 0.0, quadSoma = 0.0, dif;
    // estrutura de repeticao
    for (i = 1; i <= 10; i++)
    {
        somaQuad = somaQuad + (i*i);
        quadSoma = quadSoma + i;
    }
    quadSoma = quadSoma*quadSoma;
    // calculo da diferenca
    dif = quadSoma - somaQuad;
    // saida de dados
    printf("A diferenca eh: %.2f", dif);
    return 0;
}
