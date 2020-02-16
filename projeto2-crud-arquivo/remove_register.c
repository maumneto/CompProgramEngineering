/**
 * @file with remove implementations
*/
#include <stdio.h>
#include <stdlib.h>
#include "remove_register.h"
#include "search.h"

/**
 * @function to remove all registries
 * @param [FILE] pointer of file
 * @param [string] path of file
 * 
 * @return [void]
*/
void remove_all(FILE *file, char path_file[])
{
    printf("\nDeleting the file...\n");
    remove(path_file);
    if (file != NULL)
    {
        printf("Error in delete file!");
        exit(1);
    }
    else
    {
        printf("Success in delete file");
    }
}