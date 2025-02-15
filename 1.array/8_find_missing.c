/*********************
 *
 * Merging Array
 * 1. Sorted Array
 *
 ***/

#include <stdio.h>
#include <stdlib.h>

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

int main()
{
	struct Array arr1 = { {3,8,16,20,25}, 10,5};
	struct Array arr2 = { {4,10,12,22,23}, 10,5};
	struct Array *arr3;

	disp(arr1);
	disp(arr2);

	return 0;
}
