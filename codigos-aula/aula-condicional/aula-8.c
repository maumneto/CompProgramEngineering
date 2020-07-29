#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;
    printf("Digite um valor positivo: ");
    scanf("%d", &valor);

    // estrutura de decisão composta em C
    if (valor > 10) 
    {
        printf("O valor é maior que 10\n");
    } 
    else 
    {
        printf("O valor é menor do 10\n");
    }
    printf("Final do Algoritmo!");
    return EXIT_SUCCESS;
}
