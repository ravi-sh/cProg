#include <stdio.h>

// Precedence is from right to left 
// eg. *++, ++ first then *
// eg. ++*, * first then ++

int main(int argc, char **argv)
{
	int ar[] = {10,20,30,40};
	int *ptr = ar;

	for(int i=0;i<4;i++)
		printf("%d ", ar[i]);
	printf("\n");
	
	//*ptr++; // Address is incremented
	//printf("%d\n", *ptr);

	/* POST INCREAMENTS */

	//printf("%d\n", *ptr++);
	//printf("%d\n", *ptr);
	
	//printf("%d:%d\n", *ptr, *ptr++); // output 20, 10

	//printf("%d:%d\n", *ptr++, *ptr); // output 10, 10
	//printf("%d\n", *ptr);
	
	/* PREE INCREAMENTS */
	printf("%d\n", ++*ptr); // Value is incremented
	printf("%d\n", *++ptr); // Address incremented
	printf("%d\n", ++*ptr); // Value incremented

	return 0;
}
