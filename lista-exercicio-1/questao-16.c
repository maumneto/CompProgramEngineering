/**
 * 16.	Escreva um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade.
 * O programa deve calcular e o valor a ser pago por aquele determinado lanche. 
 * Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue abaixo:
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    int cod, quant;
    float res;
    // entrada de dados
    printf("Digite o codigo:\n100-cachorro quente\n101-bauru\n102-hamburguer\n103-suco\n104-refrigerante\n");
    scanf("%d", &cod);
    printf("\nDigite a quantidade pedida: ");
    scanf("%d", &quant);
    // logica do calculo
    switch (cod)
    {
    case 100:
        res = quant*1.20;
        break;
    case 101:
        res = quant*1.30;
        break;
    case 102:
        res = quant*1.50;
        break;
    case 103:
        res = quant*2.20;
        break;
    case 104:
        res = quant*1.00;
        break;
    default:
        printf("\nCodigo Invalido!");
        break;
    }
    printf("\nO valor final a ser pago eh: %.2f", res);
    return 0;
}
