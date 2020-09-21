/**
 * 25.	Faça um programa que receba um número inteiro N e mostre os N termos da sequência de Fibonacci.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    int termos, a = 0, b = 1, aux, i;
    // entrada de dados
    printf("Digite o numero de termos: ");
    scanf("%d", &termos);
    // logica do calculo de fibonacci
    if (termos <= 0)
    {
        printf("Numero Invalido!\n");
    }
    else if (termos == 1) {
        printf("0\n");
    } else if (termos == 2) {
        printf("0\n");
        printf("1\n");
    }
        else
    {
        printf("0\n");
        printf("1\n");
        for (i = 2; i < termos; i++)
        {
            aux = a + b;
            a = b;
            b = aux;
            printf("%d\n", aux);
        }
    }
    printf("FIM");
    return 0;
}
