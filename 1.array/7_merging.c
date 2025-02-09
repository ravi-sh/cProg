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

struct Array * merge(struct Array arr1, struct Array arr2)
{
	int i, j, k;
	struct Array *arr3;
	arr3 = (struct Array *) malloc(sizeof(struct Array));

	i=j=k=0;

	while(i < arr1.length && j < arr2.length)
	{
		if(arr1.a[i] < arr2.a[j]) arr3->a[k++] = arr1.a[i++];
		else arr3->a[k++] = arr2.a[j++]; 
	}

	for(; i<arr1.length; i++)
		arr3->a[k++] = arr1.a[i];
	for(; j<arr2.length; j++)
		arr3->a[k++] = arr2.a[j];

	arr3->length = k;
	arr3->size = 10;

	return arr3;
}

int main()
{
	struct Array arr1 = { {3,8,16,20,25}, 10,5};
	struct Array arr2 = { {4,10,12,22,23}, 10,5};
	struct Array *arr3;

	disp(arr1);
	disp(arr2);
	arr3 = merge(arr1, arr2);
	disp(*arr3);

	return 0;
}
