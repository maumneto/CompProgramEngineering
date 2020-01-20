/**
 * ​12. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. 
 * Sendo que o raio e passado por parâmetro.
 *   V = 4/3∗π∗R3
*/
#include <stdio.h>
#include <stdlib.h>

const double pi = 3.1415;

float volume_esfera(float *r)
{
    float v;
    v = (3/4)*pi*(*r);
    return v;
}

int main(int argc, char const *argv[])
{
    // variaveis
    float *raio = NULL;
    float vol;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    //r = &raio;
    vol = volume_esfera(&raio);
    printf("O volume da esfera eh: %.2f", vol);
    return 0;
}
