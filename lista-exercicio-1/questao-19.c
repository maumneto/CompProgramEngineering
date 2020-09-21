/**
 * Faça um programa que peça para o usuário digitar 10 valores e calcule a média aritmética dos valores digitados. 
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor, i;
    float media = 0.0;
    for(i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        media = media + valor;
    }
    media = media / 10;
    printf("\nA media eh: %.2f", media);
    return 0;
}
