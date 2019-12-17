/**
 * 18.	Faça um programa que utilize o comando while para mostrar uma contagem regressiva na tela, 
 * iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM” após a contagem.
*/
#include <stdio.h>

int main ()
{
    int valor = 10;
    while (valor >= 0){
        printf("Valor %d", valor);
        valor--;
    }
    printf("\nFim");
    return 0;
}