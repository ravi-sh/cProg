/******************
 * Linear Search
 *****************/

#include <stdio.h>

#define ARR_SIZE 20

struct Array {
	int a[ARR_SIZE];
	int size;
	int length;
};

int linearSearch(struct Array arr, int key)
{
	int i;
	for(i=0; i<arr.length; i++) {
		if(key == arr.a[i]) return i;
	}
	return -1;
}

int main()
{
	/* Sorted Array */
	//struct Array arr = {{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43}, 15,15};
	
	/* Unsorted array */
	struct Array arr = { {2,6,4,5,3}, 10,5};
	int key = 4;

	printf("index:%d\n", linearSearch(arr,key));

	return 0;
}
