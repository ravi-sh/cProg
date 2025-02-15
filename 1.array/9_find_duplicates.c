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

void printDuplicates(struct Array *arr)
{
	int lastDuplicate = 0;
	int i;

	for( i < 0; i < arr->length; i++ ) {
		if(arr->a[i] == arr->a[i+1] && lastDuplicate != arr->a[i]) {
			printf("Duplicate: %d\n", arr->a[i]);
			lastDuplicate = arr->a[i];
		}
	}
}

void printDuplicates_Hash(struct Array *arr, int low, int high)
{
	int *hash = (int *) malloc(sizeof(int)*high);
	int i;

	for( i=0; i < arr->length; i++ ) hash[arr->a[i]]++;
	for( i=low; i <= high; i++ ) {
		if (hash[i] > 1)
			printf("Duplicate Element: %d\n", i);
	}
}

int main()
{
	/* Sorted array */
	struct Array arr3 = { {3,6,8,8,10,12,15,15,15,20}, 15, 10};
	disp(arr3);
	printDuplicates(&arr3);

	struct Array arr4 = { {8,3,6,4,6,5,6,8,2,7}, 15,10};
	disp(arr4);
	printDuplicates_Hash(&arr4, 2, 8);


	struct Array arr5 = { {6,7,8,9,11,12,15,16,17,18}, 15, 11};

	/* Unsorted array */
	struct Array arr6 = { {3,7,4,9,12,6,1,11,2,10}, 15, 10};

	return 0;
}
