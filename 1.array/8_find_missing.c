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

int findMissing_element(struct Array *arr)
{
	int i, sum = 0, natural_num_sum;

	for( i=0; i < arr->length; i++ ){
		sum = sum + arr->a[i];
	}

	natural_num_sum = ( 12 * (12+1) / 2);
	return natural_num_sum-sum;
}

void findMissing_element2(struct Array *arr)
{
	int i, diff;

	i = 0;
	diff = arr->a[i] - i /* index */;

	for( i=0; i < arr->length; i++) {
		if( diff != (arr->a[i] - i) ) {
			while(diff < (arr->a[i] - i)) {
				printf("Missing element:%d\n", i+diff);
				diff++;
			}
		}
	}
}

void findMissing_hash(struct Array *arr)
{
	int low_value = 1;
	int high_value = 12;
	int i;

	int *hash = (int *) malloc(sizeof(int)*high_value);

	for( i=0; i < arr->length; i++) {
		hash[arr->a[i]]++;
	}

	for( i = low_value; i <= high_value; i++ ) {
		if(hash[i] == 0) printf("Missing element:%d\n", i);
	}
}

int main()
{
	//struct Array arr1 = { {3,8,16,20,25}, 10,5};
	//struct Array arr2 = { {4,10,12,22,23}, 10,5};
	
	/* use the formula first 12 natural numbers sum n(n+1)/2 */
	struct Array arr3 = { {1,2,3,4,5,6,8,9,10,11,12}, 15, 11};

	disp(arr3);
	printf("Missing element (natural number sequence):%d\n", findMissing_element(&arr3));

	struct Array arr4 = { {6,7,8,9,10,11,13,14,15,16,17}, 15, 11};
	disp(arr4);
	findMissing_element2(&arr4);

	struct Array arr5 = { {6,7,8,9,11,12,15,16,17,18}, 15, 11};
	disp(arr5);
	findMissing_element2(&arr5);

	/* Unsorted array */
	struct Array arr6 = { {3,7,4,9,12,6,1,11,2,10}, 15, 10};
	disp(arr6);
	findMissing_hash(&arr6);

	return 0;
}
