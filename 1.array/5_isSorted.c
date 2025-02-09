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

int isSorted(struct Array arr)
{
	int i;

	for(i=0; i < arr.length-1; i++)
	{
		if( arr.a[i] > arr.a[i+1])
			return -1;
	}

	return 1;
}

int main()
{
	struct Array arr = { {2,3,5,6,7}, 10,5};
	disp(arr);

	if (isSorted < 0 ) printf("Not Sorted!!\n");
	else printf("Sorted!!\n");
	return 0;
}	
