/**
 * Faça uma função que receba o número de termos ​n de fibonacci 
 * e retorne os ​n termos da sequência de fibonacci
*/
#include <stdio.h>
#include <stdlib.h>

void fibonacci(int num);

int main(int argc, char const *argv[])
{
    int numeros;
    printf("Digite o número de termos: ");
    scanf("%d", &numeros);
    fibonacci(numeros);
    printf("\nFIM");
    return 0;
}

void fibonacci(int num)
{
    int a, b, aux, i;
    a = 0;
    b = 1;
    if (num < 0) 
    {
        printf("\nNumero Invalido!");
    }else{
        for (i = 0; i < num; i++)
        {
            aux = a + b;
            a = b;
            b = aux;
            printf("%d\n", aux);
        }
    }

}