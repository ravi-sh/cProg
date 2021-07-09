#include "sll.h"

void remove_node(st **ptr, int key)
{
    st *temp = *ptr, *pre;

    if(temp != NULL && temp->data == key){
	*ptr = temp->next;
    	free(temp);
	return;
    }

    while(temp != NULL && temp->data != key){
    	pre = temp;
	temp = temp->next;
    }

    if(temp == NULL)
	    return;

    pre->next = temp->next;
    free(temp);
}
