#include "cll.h"

int countnodes(st *ptr)
{
    st *temp = ptr;
    int ct = 0;
    if(ptr != NULL) {
        do{
            ct++;
            temp = temp->next;
        }while(temp != ptr);
    }

    return ct;
}