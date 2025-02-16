#include <stdio.h>
#include <string.h>

int count_words(const char *str)
{
	if(str == NULL) return 0;

	int i, word=1;
	for(i=0; str[i] !='\0'; i++) {
		if(str[i] == ' ' && str[i-1] != ' ')
			word++;
	}

	return word;
}

int main()
{
	char str[] = "how are you";
	printf("%d\n", count_words(str));
	return 0;
}
