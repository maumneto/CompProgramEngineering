#include <stdio.h>

/**
 * Operadores
 *  - aritmeticos
 *  - relacionais
 *  - logicos
 *  - atribuicao
*/

int main()
{
    // operadores aritmeticos
    int x, y, z, k;
    printf("\nOPERADORES ARITMETICOS\n");
    printf("Valor 1: ");
    scanf("%d", &x);
    printf("Valor 2: ");
    scanf("%d", &y);
    printf("O resultado da soma é: %d\n", x + y);
    printf("O resultado da multiplicação é: %d\n", x * y);
    printf("O resultado da divisão inteira é: %d\n", x / y);
    printf("O resultado do resto inteiro da divisão é: %d\n", x % y);

    // operadores relacionais
    printf("\nOPERADORES RELACIONAIS\n");
    printf("Valor 1: ");
    scanf("%d", &x);
    printf("Valor 2: ");
    scanf("%d", &y);
    printf("O resultado de x Maior que y: %d\n", x > y);
    printf("O resultado de x Menor que y: %d\n", x < y);
    printf("O resultado de x Maior ou igual a y: %d\n", x >= y);
    printf("O resultado de x Menor ou igual a y: %d\n", x <= y);
    printf("O resultado de x igual a y: %d\n", x == y);
    printf("O resultado de x diferente de y: %d\n", x <= y);

    // operadores logicos
    printf("\nOPERADORES LOGICOS\n");
    printf("Valor 1: ");
    scanf("%d", &x);
    printf("Valor 2: ");
    scanf("%d", &y);
    printf("Valor 3: ");
    scanf("%d", &z);
    printf("Valor 4: ");
    scanf("%d", &k);
    printf("O resultado do AND é: %d\n", ((x >= y)&&(z <= k)));
    printf("O resultado do OR é: %d\n", ((x >= y)||(z <= k)));
    printf("O resultado do NOT é: %d\n", !(x >= y));

    /**                 AND
     *            x  |  y  | x && y
     *            0  |  0  |   0
     *            1  |  0  |   0
     *            0  |  1  |   0
     *            1  |  1  |   1 
    */

    /**                 OR
     *            x  |  y  | x || y
     *            0  |  0  |   0
     *            1  |  0  |   1
     *            0  |  1  |   1
     *            1  |  1  |   1 
    */

    /**             NOT
     *            x  | !x  
     *            0  |  1  
     *            1  |  0   
    */
    
    // operadores de atribuição 
    printf("\nOPERADORES DE ATRIBUICAO\n");
    printf("Valor 1: ");
    scanf("%d", &x);
    printf("Valor 2: ");
    scanf("%d", &y);
    printf("O resultado de x += y é: %d\n", x += y);
    printf("O resultado de x -= y é: %d\n", x -= y);
    printf("O resultado de x *= y é: %d\n", x *= y);
 
    //  operadores pre/pos incremento/decremento
    printf("\nOPERADORES DE PRE/POS INCREMENTO/DECREMENTO\n");
    printf("Valor 1: ");
    scanf("%d", &x);
    printf("Valor 2: ");
    scanf("%d", &y);

    printf("resultado pos-incremento: %d\n", x++);
    printf("resultado pre-incremento: %d\n", ++x);
    printf("resultado pos-decremento: %d\n", y--);
    printf("resultado pre-decremento: %d\n", --y);

    return 0;
}