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
    printf("FIM");
    return 0;
}

void fibonacci(int num)
{
    int a, b, aux, i;
    a = 0;
    b = 1;
    if (num <= 0) 
    {
        printf("Numero Invalido!");
    }
        else if (num == 1) 
    {
        printf("0\n");
    }
        else if (num == 2) 
    {
        printf("0\n");
        printf("1\n");
    }
        else
    {
        printf("0\n");
        printf("1\n");
        for (i = 2; i < num; i++)
        {
            aux = a + b;
            a = b;
            b = aux;
            printf("%d\n", aux);
        }
    }

}