/**
 * Use o comando switch para escrever um programa que leia um inteiro 
 * entre 1 e 7 e imprima o dia da semana correspondente a este número 
 * (exemplo: 1 – domingo, 2 – segunda-feira, etc).
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variavel local
    int dia;
    // entrada de dados
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);
    // logica para conversao do numero em dia
    switch (dia)
    {
    case 1:
        printf("\nDomingo");
        break;
    case 2:
        printf("\nSegunda-feira");
        break;
    case 3:
        printf("\nTerca-feira");
        break;
    case 4:
        printf("\nQuarta-feira");
        break;
    case 5:
        printf("\nQuinta-feira");
        break;
    case 6:
        printf("\nSexta-feira");
        break;
    case 7:
        printf("\nSabado");
        break;
    default:
        rintf("\nValor Invalido.");
        break;
    }

    return 0;
}
