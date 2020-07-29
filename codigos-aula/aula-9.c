#include <stdio.h>

int main(int argc, char const *argv[])
{
    float media;
    printf("Digite a média: ");
    scanf("%f", &media);
    // estrutura de decisão (if aninhados)
    // limiares: 
    // 0-4(não <inclusivo>) - reprovado
    // 4(inclusivo) - 7 (não inclusivo) - final
    // 7(inclusivo) - 10 - aprovado
    if (media >= 7.0)
    {
        printf("O aluno está aprovado! Vai Embora!\n");
    } 
    else
    {
        if(media < 4.0)
        {
            printf("Reprovado! Até o próximo semestre :)\n");
        }
        else
        {
            printf("Está de Final! Melhor Estudar!\n");
        }
        
    }
    printf("Fim do algoritmo\n");
    return 0;
}
