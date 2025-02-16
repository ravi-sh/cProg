#include <stdio.h>
#include <string.h>

void str_reverse(char *str)
{
	if (str == NULL) return;

	int left = 0;
	int right = strlen(str)-1;

	while(left < right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}

	return;
}

int main()
{
	char str[] = "Python";
	printf("Non reveresed string:%s\n", str);
	str_reverse(str);
	printf("Reversed string:%s\n", str);
	return 0;
}
