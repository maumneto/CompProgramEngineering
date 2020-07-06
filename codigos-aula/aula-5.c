#include <stdio.h>

// Cast (Conversão) de valores
int main(){
    int x = 65, y = 2, z, k;
    float f, f1;
    char c, l = 'a';

    f = (float) x;
    c = (char) x;
    f1 = (float) x/y;
    z = (int) f1;
    k = (int) l;

    printf("O valor da variável f é: %f\n", f);
    printf("O valor da variável c é: %c\n", c);
    printf("O valor da variável f1 é: %f\n", f1);
    printf("O valor da variável z é: %d\n", z);
    printf("O valor da variável k é: %d\n", k);

    return 0;
}