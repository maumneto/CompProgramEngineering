/**
 * header with @struct of client data
*/
#ifndef DATA_CLIENT_H
#define DATA_CLIENT_H "data_client.h"

struct cart
{
    char medicine[20];
    int code;
};

struct client
{
    char name[30];
    int age;
    long int cpf;
    struct cart product;
};

#endif