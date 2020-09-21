/**
 * 6.	Faça um programa que leia um ângulo em graus e apresente a conversão em radianos. 
 * Nota: a fórmula de conversão é R = G*/180, sendo que G é o ângulo em graus e R em radianos.
*/
#include <stdio.h>

#define pi 3.1415

int main(int argc, char const *argv[])
{
    float ang, rad;
    // entrada de dados
    printf("Digite o angulo em graus: ");
    scanf("%f", &ang);
    // calculo da conversao
    rad = (ang*pi)/180;
    //saida de dados
    printf("\nRadianos: %.2f", rad);
    return 0;
}
