/**
 * Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor (máximo 15 letras) e ano.
 * Procure um livro por título, perguntando ao usuário qual título deseja buscar. 
 * Mostre os dados de todos os livros encontrados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// struct
typedef struct
{
    char titulo[50];
    char autor[15];
    int ano;
} livro;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    // array de variaveis
    livro livros[5];
    int i;
    char titulo_busca[50];
    // entrada de dados
    for (i = 0; i < 5; i++)
    {
        printf("Digite o título do livro %d: ", i);
        scanf("%[^\n]", livros[i].titulo);
        fflush(stdin);
        printf("Digite o autor do livro %d: ", i);
        scanf("%[^\n]", livros[i].autor);
        fflush(stdin);
        printf("Digite o ano do livro %d: ", i);
        scanf("%d", &livros[i].ano);
    }
    // entrada do titulo de busca
    printf("Digite o título do livro que queira buscar: ");
    scanf("%[^\n]", titulo_busca);
    // busca
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        if (titulo_busca == livros[i].titulo)
        {
            printf("Livro Encontrado!\nTítulo: %s\nAutor: %s\nIdade: %d", livros[i].titulo, livros[i].autor, livros[i].ano);
        }
    }
    return 0;
}
