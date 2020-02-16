/**
 * @file with update implementations
*/
#include <stdio.h>
#include <stdlib.h>
#include "data_client.h"
#include "update.h"

/**
 * @function to update a registry
 * @param [struct client] client data
 * @param [FILE] pointer of file
 * @param [string] path of file
 * 
 * @return [void]
*/
void update_register(struct client cli ,FILE *file, char path_file[])
{
    file = fopen(path_file, "a");

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
            printf("\nSuccess in update data!\n");
            fclose(file);
        }        
    }
    return;
}