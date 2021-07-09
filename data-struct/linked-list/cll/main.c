#include "cll.h"

int main()
{
    st *hptr = NULL;
    char ch;

    do {
        pushnode(&hptr);
        printf("Enter new node data (y/n)\n");
        scanf(" %c", &ch);
    }while (ch == 'y');

    printnodes(hptr);
    printf("Total nodes: %d\n", countnodes(hptr));

    
    return 0;
}