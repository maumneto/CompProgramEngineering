/**
 * Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o 
 * número de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. 
 * Um possível critério seria o da “distribuição ótima” no sentido de que as notas de menor valor 
 * sejam distribuídas em número mínimo possível.
 * Escreva um programa que leia o valor da quantia solicitada e imprima na tela a distribuição das notas de 
 * acordo com o critério acima. 
 * Considere apenas a existência das notas de R$50, R$10, R$5 e R$1 no caixa eletrônico.
 * Exemplo: Ao digitar R$87, a impressão deve mostrar:
Nota50 = 1
Nota10 = 3
Nota5 = 1
Nota1 = 2
entrada de dados -> inteiro
processamento: divisao do valor total pela nota --> atualizar o valor total (utilizar o operador %) (auxiliar)
saida -> 4 variaveis do tipo inteiro

*/

#include <stdio.h>

int main()
{
    // criando as variaveis
    int valor, nota50, nota10, nota5, nota1, aux;
    //entrada de dados
    printf("Entre com o valor do dinheiro: ");
    scanf("%d", &valor);
    // processamento
    aux = valor; 

    nota50 = aux / 50;
    aux = aux % 50; // atualizando a minha variavel aux

    nota10 = aux / 10;
    aux = aux % 10;

    nota5 = aux / 5;
    aux = aux % 5;

    nota1 = aux / 1;
    // aux = aux % 1;

    // saida de dados
    printf("Valor requerido: %d\n", valor);
    printf("nota 50: %d\n", nota50);
    printf("nota 10: %d\n", nota10);
    printf("nota 5: %d\n", nota5);
    printf("nota 1: %d\n", nota1);

    return 0;
}
