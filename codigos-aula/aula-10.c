#include <stdio.h>

int main(int argc, char const *argv[])
{
    float media;
    printf("Digite a média: ");
    scanf("%f", &media);
    // utilizando ifs alinhados
    if (media >= 7.0) 
    {
        printf("Aprovado!");
    }
    if (media < 4.0) 
    {
        printf("Reprovado!");
    }
    if( (media >= 4.0) && (media < 7.0))
    {
        printf("Final!");
    }
    return 0;
}
