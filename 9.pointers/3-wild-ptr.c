/*
 * A wild pointer is only declared but not assigned an address of any variable.
 * They are very tricky, and they may cause segmentation errors.
 */

#include <stdio.h>

int main(){
	int *ptr; // not assigned any address
	printf("%x\n", *ptr);

	return 0;
}
