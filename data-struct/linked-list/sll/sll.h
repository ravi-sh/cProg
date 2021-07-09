#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define DEBUG 0

#if(DEBUG == 1)
#define debMsg printf
#else
#define debMsg //printf
#endif

typedef struct student{
	int data;
	struct student *next;
}st;

void add_begin(st **ptr);
void add_end(st **ptr);
void add_middle(st **ptr);

void printdata(st *ptr);
int findloop(st *ptr);
int countnodes(st *ptr);


