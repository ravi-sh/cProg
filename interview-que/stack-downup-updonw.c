#include <stdio.h>

#if 0
void argument_alignment_check( char c1, char c2 )
{
   // Considering downward stack
   // (on upward stack the output will be negative)
   printf("Displacement %d\n", (int)&c2 - (int)&c1);
}

int main(){

	char ch2 = 'B';
	char ch1 = 'A';

	argument_alignment_check( ch1, ch2 );

	return 0;
}
#endif

// C program to check whether stack grows
// downward or upward.


void fun(int *main_local_addr)
{
    int fun_local;
    if (main_local_addr < &fun_local)
        printf("Stack grows upward\n");
    else
        printf("Stack grows downward\n");
}

int main()
{
    // fun's local variable
    int main_local;

    fun(&main_local);
    return 0;
}
