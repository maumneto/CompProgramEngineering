/**
 * 14.	Faça um programa que calcule as raízes da equação de 2º grau.
    Lembre-se que: x = (-b ± √Δ)/2a onde Δ = b2 – 4ac
    E ax2 + bx + c = 0 representa uma equação do 2º grau.

    A variável 'a' tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação do segundo grau”.
        Se Δ<0, não existe real. Imprima a mensagem “Não existe raiz”.
        Se Δ=0, existe uma raiz real. Imprima a raiz e a mensagem Raiz Única.
        Se Δ≥0, imprima as duas raízes
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // variaveis locais
    float a, b, c, delta, x1, x2;
    // verificação se a equação é do segundo grau
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    if (a == 0)
    {
        printf("\nA equacao nao eh do segundo grau!");
        exit(-1);
    } 
        else
    {
        printf("\nDigite o valor de B: ");
        scanf("%f", &b);
        printf("\nDigite o valor de C: ");
        scanf("%f", &c);
        // calculo de delta
        delta = (b*b) - (4*a*c);
        // verificação se há ou não raizes na equação
        if (delta < 0)
        {
            printf("\nNão ha raizes na equacao!");
        } 
            else if (delta == 0)
        {
            x1 = (-b + sqrt(delta))/(2*a);
            printf("\nPossui somente uma raiz que eh: %2.f", x1);
        }
            else
        {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("\nPossui duas raizes que sao:\nx1 = %.2f\nx2 = %.2f", x1, x2);
        }   
    }
    return 0;
}
