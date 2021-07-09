#include "sll.h"

void remove_node(st **ptr)
{
    st *prev = NULL;
    st *cur = *ptr;
    st *next = NULL;

    while(cur !== NULL){
	next = cur->next;
	cur->next = prev;
	prev = cur;
	cur = next;
    }

    *ptr = prev;

}
