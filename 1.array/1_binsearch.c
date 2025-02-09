/******************
 * Bin Search
 *****************/

#include <stdio.h>

#define ARR_SIZE 20

struct Array {
	int a[ARR_SIZE];
	int size;
	int length;
};


int binarySearch(struct Array arr, int key)
{
	int low_index, high_index, mid_index;
	low_index = 0;
	high_index = arr.length-1;

	while( low_index <= high_index )
	{
		mid_index = (low_index + high_index)/2;

		if(key == arr.a[mid_index]) return mid_index;
		else if (key < arr.a[mid_index]) high_index = mid_index - 1;
		else low_index = mid_index + 1;
	}
	return -1;
}

int RbinarySearch(struct Array arr, int low_index, int high_index, int key)
{
	int mid_index = 0;

	while( low_index <= high_index )
	{
		mid_index = ( low_index + high_index )/2;

		if( key == arr.a[mid_index] ) return mid_index;
		else if ( key < arr.a[mid_index] ) return RbinarySearch(arr, low_index, mid_index-1, key);
		else return RbinarySearch(arr, mid_index+1, high_index, key);
	}
	return -1;
}

int main()
{
	/* Sorted Array */
	struct Array arr = {{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43}, 15,15};
	int key = 18;
	
	printf("index:%d\n", binarySearch(arr,key));
	printf("index:%d\n", RbinarySearch(arr, 0, arr.length, key));


	return 0;
}
