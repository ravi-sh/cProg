#include "cll.h"

void printnodes(st *ptr)
{
    st *temp = ptr;
    if( ptr != NULL ){
        do{
            printf("%d ", temp->data);
            temp = temp->next;
        }while( temp != ptr);
        printf("\n");
    }
}