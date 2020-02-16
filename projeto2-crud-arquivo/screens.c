/**
 * @file with screens implementations
*/
#include <stdio.h>
#include "screens.h"

/**
 * @function to print home screen
 * @param [void]
 * 
 * @return [void]
*/
void home_screen(void)
{
    printf(" ********************************* \n");
    printf(" **                             ** \n");
    printf(" **  WELCOME TO THE PROJECT 2   ** \n");
    printf(" **                             ** \n");
    printf(" ********************************* \n");
    printf("\n");
}

/**
 * @function to print final screen
 * @param [void]
 * 
 * @return [void]
*/
void final_screen(void)
{
    printf("\n");
    printf(" ********************************* \n");
    printf(" **                             ** \n");
    printf(" **     END OF APPLICATION      ** \n");
    printf(" **                             ** \n");
    printf(" ********************************* \n");
    printf("\n");
}

/**
 * @function to print choice screen
 * @param [void]
 * 
 * @return [void]
*/
void choice_screen(void)
{
    printf("\n");
    printf("Choose the action to be executed: \n");
    printf("1-create a first register\n2-add new register\n3-search register\n");
    printf("4-list all register\n5-show register\n6-update register\n7-remove all\n");
    printf("Option: ");
}
