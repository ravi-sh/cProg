#include <stdio.h>

int main(){
	int ptr[2] = {4, 10};

	int *ptr1 = ptr;

	++*ptr1; // value is incremented
	printf("ptr: %d\n", *ptr1);

	//*++ptr1;
	//printf("ptr: %d\n", *ptr1);

	//*ptr1++; // address is incremented
	//printf("ptr: %d\n", *ptr1);

	printf("ptr: %d\n", *ptr1++);
	printf("ptr: %d\n", *ptr1);

	return 0;
}
