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

void findPairs(struct Array *arr, int k)
{
	int i,j;

	i = 0;
	j = arr->length-1;

	while(i<j) {
		if(arr->a[i]+arr->a[j] == k) {
			printf("%d + %d = %d\n", arr->a[i], arr->a[j], k);
			i++;
			j--;
		}
		else if (arr->a[i] + arr->a[j] < k) i++;
		else j--;
	}
}

void findPairs_Hash(struct Array *arr, int high, int k)
{
	int *hash = (int *) malloc(sizeof(int)*high);
	int i;

	for( i=0; i < arr->length; i++ ) {
		if( (k-arr->a[i]) > 0 && hash[k-(arr->a[i])] !=0 ) {
			printf("%d + %d = %d\n", arr->a[i], k-(arr->a[i]), k);
		}
		hash[arr->a[i]]++;
	}
}

int main()
{
	struct Array arr3 = { {6,3,8,10,16,7,5,2,9,14}, 15, 10};
	disp(arr3);
	findPairs_Hash(&arr3, 16, 10);

	printf("SORTED ARRAY\n");
	/* Sorted array */
	struct Array arr4 = { {1,3,4,5,6,8,9,10,12,14}, 10, 10};
	disp(arr4);
	findPairs_Hash(&arr4, 16, 10);

	printf("Without using hash\n");
	findPairs(&arr4, 10);

	return 0;
}
