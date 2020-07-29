#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero (0 - 5): ");
    scanf("%d", &num);
    // estrutura de decisao alinhada
    if (num == 0)
    {
        printf("zero!");
    } 
        else if (num == 1)
    {
        printf("Um");
    } 
        else if (num == 2)
    {
        printf("Dois");
    } 
        else if (num == 3)
    {
        printf("três");
    } 
        else if (num == 4)
    {
        printf("Quatro");
    } 
        else if (num == 5)
    {
        printf("Cinco");
    }
    else {
        printf("Nenhum numero valido foi escolhido!");
    }
    return 0;
}
