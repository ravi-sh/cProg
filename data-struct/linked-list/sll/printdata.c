#include "sll.h"

void printdata(st *ptr)
{
    printf("Data :\n");
    while (ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;        
    }
    printf("\n");
}