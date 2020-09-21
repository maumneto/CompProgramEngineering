/**
 * 15.	Faça um algoritmo que calcule o IMC de uma pessoa e 
 * mostre sua classificação de acordo com a tabela abaixo:
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variavel local
    float imc;
    // entrada de dados
    printf("Digite o valor do seu IMC: ");
    scanf("%f", &imc);
    // logica do imc
    if (imc < 18.5)
    {
        printf("\nAbaixo do peso!");
    } 
        else if (imc >= 18.5 && imc < 25)
    {
        printf("\nSaudavel!");
    } 
        else if (imc >= 25 && imc < 30)
    {
        printf("\nExcesso de peso!");
    }
        else if (imc >= 30 && imc < 35)
    {
        printf("\nObesidade grau 1");
    } 
        else if (imc >= 35 && imc < 40)
    {
        printf("\nObesidade grau 2 - severa");
    }
        else 
    {
        printf("\nObesidade grau 3 - morbida");
    }
    return 0;
}
