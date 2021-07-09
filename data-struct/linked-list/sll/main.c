#include "sll.h"

int main()
{
	st *hp = NULL;
	char ch;

	do {
		//add_begin(&hp);
		//add_end(&hp);
		add_middle(&hp);
		printf("prompt: Add next data (y/n)\n");
		scanf(" %c", &ch);
	}while( ch == 'y');

	printdata(hp);

	if(findloop(hp)) printf("Loop detected\n");
	else printf("Loop is not detected\n");

	printf("Num of nodes in LL: %d\n", countnodes(hp));

	return 0;
}
