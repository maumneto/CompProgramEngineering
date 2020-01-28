/**
 * 17.	Um produto vai sofrer aumento de acordo com a tabela abaixo. 
 * Leia o preço antigo, calcule e escreva o novo preço, e 
 * escreva também uma mensagem em função do preço novo (de acordo com a seguinte tabela).
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    float valorAntigo, valorNovo;
    // entrada de dados
    printf("Digite o valor antigo: ");
    scanf("%f", &valorAntigo);
    // logica
    if (valorAntigo <= 50)
    {
        valorNovo = valorAntigo*0.05;
        printf("\nO valor reajustado eh: %.2f", valorAntigo+valorNovo);
    } 
        else if (valorAntigo < 50 && valorAntigo >= 100)
    {
        valorNovo = valorAntigo*0.1;
        printf("\nO valor reajustado eh: %.2f", valorAntigo+valorNovo);
    } 
        else
    {
        valorNovo = valorAntigo*0.15;
        printf("\nO valor reajustado eh: %.2f", valorAntigo+valorNovo);
    } 
    return 0;
}
