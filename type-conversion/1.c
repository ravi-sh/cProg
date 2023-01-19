#include <stdio.h>

/*
 * 5/2 = 2
 * 5.0/2 = 2.5000
 *
 * 2/5 = 0
 * 2.0/5 = 0.4000
 *
 * int & int --> int
 * int & float --> float
 * float & float --> float
 *
 */

int main(){
	printf("5/2=%d\n", 5/2); // result is int value
	printf("5.0/2=%f\n", 5.0/2); // result is float value

	printf("2/5=%d\n", 2/5);
	printf("2.0/5=%f\n", 2.0/5);

	int a, b;

	//Sign is same as of numerator operand
	a = 5%2; // result is +ve value
	b = -5%2; // result is -ve value
	printf("%d\n", a);
	printf("%d\n", b);

	a = 3.0/9; // result is zero as the 'a' is of type int
	printf("%d\n", a);
	return 0;
}
