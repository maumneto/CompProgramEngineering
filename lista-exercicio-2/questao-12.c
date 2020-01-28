/**
 * ​12. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. 
 * Sendo que o raio e passado por parâmetro.
 *   V = 4/3∗π∗R3
*/
#include <stdio.h>
#include <stdlib.h>

#define pi 3.1415

float volume_esfera(float *r)
{
    float v;
    v = (0.75) * pi * (*r);
    return v;
}

int main(int argc, char const *argv[])
{
    // variaveis
    float *raio = NULL;
    float vol, r;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    raio = &r;
    vol = volume_esfera(raio);
    printf("O volume da esfera eh: %.2f", vol);
    return 0;
}
