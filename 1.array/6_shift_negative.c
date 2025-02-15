/********************************
 * 1. Inserting in sorted array (Always start from last element)
 * 2. Check if array is sorted
 * 3. Arranging -ve on left side
 *
 ********************************/

#include <stdio.h>

#define ARR_SIZE 20

struct Array {
	int a[ARR_SIZE];
	int size;
	int length;
};

void disp(struct Array arr)
{
	int i;
	for( i=0; i<arr.length; i++ )
		printf("%d ", arr.a[i]);
	printf("\n");
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/* Rearrange the elements */
void shiftNegative2left(struct Array *arr)
{
	int i, j;
	i=0;
	j = arr->length -1;

	while(i<j)
	{
		while(arr->a[i] < 0) i++;
		while(arr->a[j] >= 0) j--;
		if(i<j) swap(&arr->a[i], &arr->a[j]);
	}
}

int main()
{
	struct Array arr = { {2,-3,5,6,7,-1,-4,8}, 10,8};
	disp(arr);

	shiftNegative2left(&arr);
	disp(arr);

	return 0;
}	
