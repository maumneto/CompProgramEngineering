#include <stdio.h>

// Entrada e saida de dados com scanf e printf
int main() {
    int x;
    float y;
    char c;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("Digite um valor float: ");
    scanf("%f", &y);
    printf("Digite um caractere: ");
    scanf("%s", &c);

    printf("Saida da variavel x = %d\n", x);
    printf("Saida da variavel y = %.2f\n", y);
    printf("Saida da variavel c = %c\n", c);
    printf("Saida da variavel c em ASCII = %d\n", c);
    return 0;
}