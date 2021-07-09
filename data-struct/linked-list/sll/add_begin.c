#include "sll.h"

void add_begin(st **ptr)
{
	st *temp = (st*) malloc( sizeof (st) );

	printf("enter the data\n");
	scanf(" %d", &(temp->data));

	temp->next = *ptr;
	*ptr = temp;
}

