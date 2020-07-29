/**
 * Faça um programa que leia um ângulo em graus e apresente a conversão em radianos. 
 * Nota: a fórmula de conversão é R = G* π/180, sendo que G é o ângulo em graus e R em radianos.
 * entrada de dados: angulo em graus - float
 * saida: angulo em radianos - float
 * constate = pi = 3.1415
 * 
*/

#include <stdio.h>

int main(){
    // criando as variaveis e constantes
    float graus;
    double rad;
    const float pi = 3.1415;
    // entrada de dados
    printf("Entre com o valor em graus: ");
    scanf("%f", &graus);
    // processamento
    rad = graus * (pi/180);
    // saida
    printf("Angulo em Radianos é: %lf", rad);
    return 0;
}