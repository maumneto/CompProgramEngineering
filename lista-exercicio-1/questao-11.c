/**
 * 11.	Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. 
 * e a prestação for maior que 20% do salário imprima: 
 * Empréstimo não concedido, caso contrário imprima: Empréstimo concedido. 
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    float sal, prest;
    // entrada de dados
    printf("Digite o valor do salario: ");
    scanf("%f", &sal);
    printf("\nDigite o valor da prestacao: ");
    scanf("%f", &prest);
    // logica para emprestimo
    if (prest > 0.2*sal)
    {
        printf("\nEmprestimo nao concedido!");
    }
        else
    {
        printf("\nEmprestimo concedido!");
    }
    return 0;
}
