#include <stdio.h>

int main(){
	int ar[] = {10,20,30,40};
	int *ptr = ar;
	
	//*ptr++;
	//printf("%d\n", *ptr);

	/* POST INCREAMENTS */

	//printf("%d\n", *ptr++);
	//printf("%d\n", *ptr);
	
	//printf("%d-%d\n", *ptr, *ptr++);

	//printf("%d:%d\n", *ptr++, *ptr);
	//printf("%d\n", *ptr);

	printf("%d\n", ++*ptr);
	printf("%d\n", *++ptr);
	printf("%d\n", ++*ptr);

	return 0;
}
