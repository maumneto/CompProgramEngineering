#include <stdio.h>

enum semana {segunda=0, terca, quarta, quinta, sexta, sabado, domingo};

int main(){
    // declaração das variaveis
    int x;
    float y;
    char c;
    enum semana sem;
    const double pi = 3.1415;
    // atribuição de valores a cada variavel
    sem = quinta; // enum
    x = 10; // int 
    y = 33.33; // float
    c = 'M'; // char
    // saida de dados
    printf("O valor do int é: %d\n", x);
    printf("O valor do float é: %f\n", y);
    printf("O valor do char é: %c\n", c);
    printf("O valor do enum é: %u\n", sem);

    return 0;
}