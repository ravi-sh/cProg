/*
 * When a pointer is declared with a void keyword, then it is called a void pointer. 
 * To print the value of this pointer, you need to typecast it.
 *
 */

#include <stdio.h>

int main(){
	int a = 20;
	char c = 'A';
	void *vd;

	vd = &a;
	printf("After typecasting, a = %d\n", *(int*)vd);

	vd = &c;
	printf("After typecasting, c = %c\n", *(char*)vd);
	

	return 0;
}
