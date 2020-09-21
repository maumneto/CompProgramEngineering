/*
 *   Faça uma função que receba uma temperatura em graus Celsius 
 *   e retorne-a convertida em graus Fahrenheit. 
 *   A fórmula de conversão é: F = C ∗ (9.0/5.0) + 32.0, 
 *   sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
 */

#include <stdio.h>
#include <stdlib.h>

float celsius_to_fah(float celsius)
{
    float fah;
    fah = celsius * (9.0/5.0) + 32.0;
    return fah;
}

int main(int argc, char const *argv[])
{
    float celsius, res;
    printf("Digite o valor da temperatura em Celsius? ");
    scanf("%f", &celsius);
    // chamada da funcao e atribuindo o resultado a uma variavel
    res = celsius_to_fah(celsius);
    printf("O resultado em Fahrenheit é: %.2f\n", res);
    return 0;
}