#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
	char str1[] = "Painter";
	char str2[] = "Painting";

	int ret;

       	ret = strcmp(str1,str2);
	printf("ret:%d\n", ret);
	
	char *f1 = index(str1, 'e');
	char *f2 = rindex(str2, 'i');

	printf("e:%d i:%d\n", *f1, *f2);
	printf("e[%d]-i[%d] = %d\n", *f1, *f2, ret);
	printf("e-i:%d\n", 'e'-'i');

	return 0;
}
