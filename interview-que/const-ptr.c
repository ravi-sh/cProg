#include <stdio.h>

int main(){

	int a = 10, b = 20;
	const int *ptr = &a; // value is constant
	//*ptr = 20;

	int const *ptr1 = &a; // value is constant
	//*ptr = 20;

	int *const ptr2 = &a; // address is constant
	//ptr2 = &b;	
	
	*ptr2 = 40;
	


	return 0;
}
