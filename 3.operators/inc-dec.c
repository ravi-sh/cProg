#include <stdio.h>

int main(){
	
	int i = 3;	

	// assign and then increment
	printf("i \t= %d\n", i);
	
	printf("i++ \t= %d\n", i++);
	printf("i-- \t= %d\n", i--);

	printf("i \t= %d\n", i);

	i = 5;	
	printf("i \t= %d\n", i);
	
	printf("++i \t= %d\n", ++i);
	printf("--i \t= %d\n", --i);
	
	printf("i \t= %d\n", i);

	// increment and assign

	return 0;
}
