/**
 * @file with search implementations
*/
#include <stdio.h>
#include <stdlib.h>
#include "data_client.h"
#include "search.h"

/**
 * @function to search a register
 * @param [long int] cpf data 
 * @param [FILE] pointer of file
 * @param [string] path of file
 * 
 * @return [struct client] client data found
*/
struct client search_register(long int cpf, FILE *file, char path_file[])
{
    int i;
    struct client cli;
    file = fopen(path_file, "r");
    
    if (file == NULL)
    {
        printf("\nError in Opening or in Creating a File\n");
        exit(1);
    }
    else
    {
        while (!feof(file))
        {
            fread(&cli, sizeof(struct client), 1, file);
            if (cpf == cli.cpf)
            {
                printf("\n\nREGISTER FOUND!\n");
                fclose(file);
                return cli;
            }
        }
    }
    fclose(file);
    return cli;
}

/**
 * @function to list all clients
 * @param [FILE] pointer of file
 * @param [string] path of file
 * 
 * @return [void] 
*/
void list_all_clients(FILE *file, char path_file[])
{
    struct client cli;
    file = fopen(path_file, "r");
    if (file == NULL)
    {
        fprintf(stderr ,"Error Opening File");
        printf("\nError in Opening or in Creating a File\n");
        exit(1);
    }
    else
    {
        printf("\n====== data clients =========\n");
        fread(&cli, sizeof(struct client), 1, file);
        do{
            printf("%s\n%d\n", cli.name, cli.age);
            printf("%ld\n%s\n%d\n", cli.cpf, cli.product.medicine, cli.product.code);
            printf("\n");
            fread(&cli, sizeof(struct client), 1, file);
        } while(!feof(file));

        fclose(file);
    }
    return;
}

/**
 * @function to show a client
 * @param [long int] cpf data 
 * @param [FILE] pointer of file
 * @param [string] path of file
 * 
 * @return [struct client] client data found
*/
struct client show_client(long int cpf, FILE *file, char path_file[])
{
    struct client cli;
    file = fopen(path_file, "r");
    if (file == NULL)
    {
        printf("\nError in Opening or in Creating a File\n");
        exit(1);
    }
    else
    {
        while (!feof(file))
        {
            fread(&cli, sizeof(struct client), 1, file);
            if (cpf == cli.cpf)
            {
                printf("\nRegister Found!\n");
                return cli;
            }
        }
        fclose(file);
    }
    return cli;
}