/**
 * @file with registry implementations
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_client.h"
#include "register.h"
#include "search.h"

/**
 * @function to do first register
 * @param [FILE] pointer of file
 * @param [string] path of file
 * 
 * @return [void]
*/
void first_register (FILE *file, char path_file[])
{
    struct client cli;
    file = fopen(path_file, "w");

    if (file == NULL)
    {
        printf("\nError in Opening or in Creating a File\n");
        exit(1);
    }
    else
    {
        printf("Let's Make a Register!\n");
        setbuf(stdin, NULL);
        printf("Type your name: ");
        scanf("%[^\n]s", cli.name);

        printf("Type your age: ");
        scanf("%d", &cli.age);

        printf("Type your CPF: ");
        scanf("%ld", &cli.cpf);

        setbuf(stdin, NULL);
        printf("Type your product name: ");
        scanf("%[^\n]s", cli.product.medicine);

        printf("Type your product code: ");
        scanf("%d", &cli.product.code);

        fwrite(&cli, sizeof(struct client), 1, file);
        if (ferror(file))
        {
            printf("\nRecording Error!\n");
        }
        else 
        {
            fclose(file);
        }        
    }
    return;
}

/**
 * @function to add a new register
 * @param [FILE] pointer of file
 * @param [string] path of file
 * 
 * @return [void]
*/
void add_register(FILE *file, char path_file[])
{
    struct client cli;
    file = fopen(path_file, "a");

    if (file == NULL)
    {
        printf("\nError in Opening or in Creating a File\n");
        exit(1);
    }
    else
    {
        printf("\nType the Information of the New Register!\n");
        setbuf(stdin, NULL);    
        printf("Type your name: ");
        scanf("%[^\n]s", cli.name);

        printf("Type your age: ");
        scanf("%d", &cli.age);

        printf("Type your CPF: ");
        scanf("%ld", &cli.cpf);

        setbuf(stdin, NULL);
        printf("Type your product name: ");
        scanf("%[^\n]s", cli.product.medicine);

        printf("Type your product code: ");
        scanf("%d", &cli.product.code);

        fwrite(&cli, sizeof(struct client), 1, file);
        if (ferror(file))
        {
            printf("\nRecording Error!\n");
        }
        else 
        {
            fclose(file);
        }  
        return;
    }
}