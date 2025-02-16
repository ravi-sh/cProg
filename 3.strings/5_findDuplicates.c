#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256
#define ALPHABATE 26

void find_duplicates(const char *str)
{
	if(str == NULL) return;

	int count[ASCII_SIZE] = {0};
	int count_alpha[ALPHABATE] = {0};
	int i;

	for(i=0; str[i] != '\0'; i++){ 
		count[(unsigned char)str[i]]++;

		if(isalpha( (unsigned int)str[i]) ) {
			int index = islower()
			count_alpha[index];
		}
	}

	printf("Duplicates:\n");
	for(i=0; i<ASCII_SIZE; i++)
		if(count[i] > 1 )
			printf("%c->%d times\n", i, count[i]);
}

int main()
{
	char str[] = "finding array duplicates";
	find_duplicates(str);
	return 0;
}

