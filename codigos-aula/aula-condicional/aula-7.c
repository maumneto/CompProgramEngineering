/***
 * Dada o valor da nota de um aluno, monte a
expressão if que verifica se ele precisará
fazer a prova final. O aluno deverá fazer
prova final se sua nota for maior ou igual a
30 e menor do que 60.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nota;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &nota);
    if ((nota >= 30) && (nota < 60)) 
        printf("Vai para Final\n");
    return 0;
}