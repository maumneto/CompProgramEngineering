/**
 * header with definition of search function
*/
#ifndef SEARCH_H
#define SEARCH_H "search.h"

struct client search_register(long int, FILE *, char []);
void list_all_clients(FILE *, char []);
struct client show_client(long int, FILE *, char []);

#endif