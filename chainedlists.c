#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct chainedlists
{
	int value;
	struct chainedlists *next;


}chainedlists;

typedef struct list
{
	int count;
	chainedlists *first;
}list;

void list_insert(list *list_pointer, int value)
{
	chainedlists *new =((chainedlists*) calloc(1,sizeof(chainedlists));
	new -> value=value;
	new -> next = NULL;
	list_pointer-> count++;
	return(new)
}

int main(int argc, char const *argv[])
{
	chainedlists first;	
 	first=list_insert(100);
 	free(first);
	return 0;
}
