#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int data;
    struct student *next;
}st;

void pushnode(st **ptr);
void popnode(st **ptr);

void printnodes(st *ptr);
int countnodes(st *ptr);