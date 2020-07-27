#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);
    if (num > 10) 
        printf("O valor digitado é maior que 10\n");
    return 0;
}

// ((x > 20) && (y <= 33))