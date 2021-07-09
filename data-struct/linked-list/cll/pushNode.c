#include "cll.h"

void pushnode(st **ptr)
{
    st *temp = (st *) malloc (sizeof(st));
    st *last = *ptr;
    printf("Enter the data\n");
    scanf("%d", &(temp->data));

    temp->next = *ptr; // head

    if(*ptr != NULL){

        while (last->next != (*ptr) ){
        
            last = last->next;
        }
        
        last->next = temp;
    }
    else{ 
        temp->next = temp;
    }
    *ptr = temp;
}