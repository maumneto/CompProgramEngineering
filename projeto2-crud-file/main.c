/** @source: project 2 - crud with data persistence
 * ------------------------------------------------------------
 * -- WELCOME TO THE PROJECT 2: CRUD WITH DATA PERSISTENCE  ---
 * ------------------------------------------------------------
 * @author: Maurício Neto (maumneto@gmail.com - @maumneto)
 * This project aims to develop a CRUD using the files. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "screens.h"
#include "register.h"
#include "data_client.h"
#include "search.h"
#include "remove_register.h"
#include "update.h"

/**
 * @function main
*/
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, " ");
    int choose;
    struct client cli;
    FILE *file;
    char path_file[] = "register.txt";

    home_screen();
    do
    {
        choice_screen();
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            system("clear");
            first_register(file, path_file);
            break;
        
        case 2:
            system("clear");
            add_register(file, path_file);
            break;
        
        case 3:
            system("clear");
            long int cpf;
            printf("Type CPF number: ");
            scanf("%ld", &cpf);
            cli = search_register(cpf, file, path_file);
            printf("Name: %s\nAge: %d\nCPF: %ld\n", cli.name, cli.age, cli.cpf);
            printf("Medicine: %s\nCode: %d\n", cli.product.medicine, cli.product.code);
            break;
        
        case 4:
            system("clear");
            list_all_clients(file, path_file);
            break;

        case 5:
            system("clear");
            long int cpf_search;
            printf("Type CPF number: ");
            scanf("%ld", &cpf_search);
            cli = show_client(cpf_search, file, path_file);
            printf("Name: %s\nAge: %d\nCPF: %ld\n", cli.name, cli.age, cli.cpf);
            printf("Medicine: %s\nCode: %d\n", cli.product.medicine, cli.product.code);
            break;
        
        case 6:
            system("clear");
            long int cpf_s2;
            printf("Type CPF number: ");
            scanf("%ld", &cpf_s2);
            cli = show_client(cpf_s2, file, path_file);
            update_register(cli, file, path_file);
            break;

        case 7:
            system("clear");
            remove_all(file, path_file);
            printf("\n");
            break;

        default:
            system("clear");
            printf("\nNo actions were selected!\n");
            break;
        }
    } while (choose >=1 && choose < 8);
    system("clear");
    final_screen();

    return EXIT_SUCCESS;
}