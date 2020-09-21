/** 
 * 9. Faça um algoritmo leia duas cadeias de caracteres A e B. 
 * Determine quantas vezes a cadeia A ocorre na cadeia B.
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[20], b[20], p_palavra;
    int i, j, cont_int = 0, cont_ocor = 0;

    printf("Digite a string a: ");
    scanf("%s", a);
    printf("Digite a string b: ");
    scanf("%s", b);

    p_palavra = a[0];
    for (i = 0; i < strlen(b); i++)
    {
        if (b[i] == p_palavra) 
        {
            cont_int = 0;
            for (j = 0; j < strlen(a); j++) 
            {
                if (b[i + j] != a[j]) 
                {
                    break;
                } else {
                    cont_int++;
                }
            }
            if (cont_int == strlen(a))
            {
                cont_ocor++;
            }
        }
    }
    
    printf("Existem %d palavras A dentro de B", cont_ocor);

    return 0;
}
