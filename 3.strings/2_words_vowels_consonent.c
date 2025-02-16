#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "How are you";
	int i, vcount=0, ccount=0;

	for( i=0; str[i] != '\0'; i++) {
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || \
		   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			vcount++;
		else if ( str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
			ccount++;
	}

	printf("string:%s\nvowels:%d\nConsonents:%d\n", str,vcount, ccount);

	return 0;
}
