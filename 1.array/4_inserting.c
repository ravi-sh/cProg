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

void insert(struct Array *arr, int x) 
{
	int i;

	i = arr->length-1;

	while( i>=0 && arr->a[i] > x) {
		arr->a[i+1] = arr->a[i];
		i--;
	}

	arr->a[i+1] = x;
	arr->length++;
}

int main()
{
	struct Array arr = { {2,3,5,6,7}, 10,5};
	disp(arr);

	insert(&arr, 4);
	disp(arr);

	return 0;
}	
