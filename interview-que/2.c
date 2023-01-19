#include <stdio.h>
#define SWAP(a, b, c) (c t; t=a, a=b, b=t)


void mypr(char *q){
	//memcpy(q, "hello", 6);
	//q = malloc(9);
	memcpy(q, "hello", 6);

}

int main()
{
	//int x=10, y = 20;
	//SWAP(x, y, int);
	//printf("%d %d", x, y);
	
	//int a = 10;

	//char *dt[8];
	char *dt = malloc(9);
	//mypr(dt);
	printf("%x", dt);
	//printf("%s\n", dt);
}
