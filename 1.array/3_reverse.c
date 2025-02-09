/*************************************************
 * Reverse array
 * Method 1 - By using extra array
 * Method 2 - By swaping the 1st with last 
 ************************************************/

#include <stdio.h>
#define ARR_SIZE 20

struct Array {
	int a[ARR_SIZE];
	int size;
	int length;
};

void swap(int *a, int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(struct Array *arr)
{
	int i,j;

	for( i=0, j=arr->length-1; i<j; i++, j--)
	{
		swap(&arr->a[i], &arr->a[j]);
	}
}

void disp(struct Array arr)
{
	int i;
	for( i=0; i<arr.length; i++ )
		printf("%d ", arr.a[i]);
	printf("\n");
}

int main()
{
	struct Array arr = { {2,3,4,5,6}, 10,5};

	disp(arr);
	reverse(&arr);
	disp(arr);

	return 0;
}
