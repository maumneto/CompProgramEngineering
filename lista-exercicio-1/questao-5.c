/**
 * 5.	Faça um programa que leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. 
 * Nota: a fórmula da conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
*/
#include <stdio.h>

int main() {
    // variaveis locais
    float celsius, kel;
    // entrada de dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    // calculo da conversao
    kel = celsius + 273.15;
    //saida de dados
    printf("\nTemperatura em Kelvin: %.2f", kel);
    return 0;
}
