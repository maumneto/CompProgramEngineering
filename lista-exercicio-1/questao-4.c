/**
 * 4.	Faça um programa que leia uma temperatura em graus Celsius e 
 *  apresente o resultado da conversão para Fahrenheit. Nota: a fórmula da 
 * conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em fahrenheit e C a temperatura em Celsius.
*/
#include <stdio.h>

int main() {
    // variaveis locais
    float celsius, fah;
    // entrada de dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    // calculo da conversao
    fah = celsius*(9.0/5.0) + 32.0;
    //saida de dados
    printf("\nTemperatura em Fahrenheit: %.2f", fah);
    return 0;
}
