#include <stdio.h>

int main(){
	int x = 2;
	
	switch(x) {
		case 1: puts("1");
			break;
		case 1+1: puts("1+1");
			  break;
		//case x: puts("x"); // not allowed
		//	break; 
		//case x*1: puts("x*1"); // not allowed
		//	  break;
		default: puts("def");
	}

	return 0;
}
