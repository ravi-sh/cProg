#include "sll.h"
// test input - 12 y 54 y 3 y 65 y 32 y 9 y 70 y 50 y 57 y 84 n
void add_middle(st **ptr)
{
    st *temp = (st *) malloc(sizeof(st));
    printf("Ener the data\n");
    scanf("%d", &(temp->data));

    debMsg("test message [L:%d]\n", __LINE__);

    if( *ptr == NULL || ( temp->data < (*ptr)->data) ){
        debMsg("test message [L:%d]\n", __LINE__);
        temp->next = *ptr;
        debMsg("test message [L:%d]\n", __LINE__);
        *ptr = temp;
        debMsg("test message [L:%d]\n", __LINE__);

    }
    else{
        st *last = *ptr;
        while (last->next != NULL && ( temp->data > last->next->data ) ){
            last = last->next;
        }
        temp->next = last->next;
        last->next = temp;
    }
    
}