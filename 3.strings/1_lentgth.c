#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Welcome";
	printf("Size:%ld\n", sizeof(str));
	printf("Length:%ld\n", strlen(str));

	int i;
	for( i=0; str[i] !='\0'; i++ );
	printf("Length:%d\n", i);

	return 0;
}
