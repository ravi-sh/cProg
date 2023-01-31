/*
 * Suppose there is a pointer p pointing at a variable at memory 1004. 
 * If you deallocate this memory, then this p is called a dangling pointer.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr;
	int a = 5;
	
	ptr = (int *) malloc( sizeof(int) );
	
	ptr = &a;
	//*ptr = a;

	free(ptr);
	// Now this ptr is know as dangaling pointer
	
	printf("After deallocating the memory, *ptr = %d\n", *ptr);
	return 0;
}
