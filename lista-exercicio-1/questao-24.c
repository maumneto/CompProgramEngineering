
/**
 * 24.	Faça um programa que apresente um menu de opções para cálculo das seguintes operações entre dois números:
    a.	Adição (opção 1)
    b.	Subtração (opção 2)
    c.	Multiplicação (opção 3)
    d.	Divisão (opção 4)
    e.	Saída (opção 5)
    O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    int opcao;
    float num1, num2, res;
    // entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &num2);
    printf("\nDigite a opcao desejada:\n1-somar\n2-subtrair\n3-multiplicar\n4-dividir\n5-sair\n");
    scanf("%d", &opcao);
    // logica 
    switch (opcao)
    {
    case 1:
        res = num1 + num2;
        printf("\nO resultado eh: %.2f", res);
        break;
    case 2:
        res = num1 - num2;
        printf("\nO resultado eh: %.2f", res);
        break;
    case 3:
        res = num1 * num2;
        printf("\nO resultado eh: %.2f", res);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("\nNao existe divisao por zero!");
        }
            else
        {
            res = num1 / num2;
            printf("\nO resultado eh: %.2f", res);
        }
        break;
    default:
        printf("\nSaida com sucesso");
        exit(0);
        break;
    }
    return 0;
}

