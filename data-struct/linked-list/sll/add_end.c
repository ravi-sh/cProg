#include "sll.h"

void add_end(st **ptr)
{
    st *temp = (st *) malloc(sizeof(st));
    printf("Ener the data\n");
    scanf("%d", &(temp->data));

    if(*ptr == NULL){
        temp->next = *ptr;
        *ptr = temp;
    }
    else{
        st *last = *ptr;
        while (last->next != NULL){
            last = last->next;
        }

        temp->next = last->next;
        last->next = temp;
    }
    
}