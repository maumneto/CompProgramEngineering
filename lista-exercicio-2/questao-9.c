/**
 * 9. Faça um algoritmo leia duas cadeias de caracteres A e B. 
 * Determine quantas vezes a cadeia A ocorre na cadeia B.
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[20], b[20], p_palavra;
    int i, j, cont = 0;

    printf("Digite a string a: ");
    scanf("%s", a);
    printf("Digite a string b: ");
    scanf("%s", b);

    p_palavra = b[0];
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == p_palavra) 
        {
            for (j = 0; j < strlen(b); j++) 
            {
                if (a[i + j] != b[j]) 
                {
                    break;
                } else {
                    cont++;
                }
            }
        }

    }
    
    printf("Existem %d palavras b dentro de a", cont);

    return 0;
}
