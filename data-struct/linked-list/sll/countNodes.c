#include "sll.h"

int countnodes(st *ptr)
{
    int ct = 0;
    while (ptr != NULL){
        ct++;
        ptr = ptr->next;
    }
    return ct;
}