#include "sll.h"

int findloop(st *ptr)
{
    st *ptr1 = ptr;
    st *ptr2 = ptr;
    
    while(ptr1 && ptr2 && ptr2->next){

        ptr1 = ptr1->next;
        ptr2 = ptr->next->next;

        if(ptr1 == ptr2){
            return TRUE;
        }
    }

    return FALSE;
}
