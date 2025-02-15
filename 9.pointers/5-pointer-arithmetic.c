#include <stdio.h>

int main(int argc, char **argv)
{
	int ar[] = {10,20,30,40,50};
	int *ptr;

	int len = sizeof(ar)/sizeof(ar[0]);
	//printf("len[%d]\n", len);
#if 0 // case-1
	ptr = ar; // or ptr = &ar[0]
	for(int i=0;i<len;i++){

		printf("Value *ptr=%d & ar[%d]=%d \n", *ptr, i, ar[i]);
		//printf("Addre *ptr=%x & ar[%d]=%x\n", ptr, i, &ar[i]);
		
		printf("ar[%d]=%x\n", i, (ar+i));
		printf("*ar[%d]=%d\n", i, *(ar+i));

		ptr++;
	}
#endif

#if 0 //case-2
	ptr = ar + (len-1);

	for(int i=len-1;i>=0;i--){

		printf("Value *ptr=%d & ar[%d]=%d \n", *ptr, i, ar[i]);
		//printf("Addre *ptr=%x & ar[%d]=%x\n", ptr, i, &ar[i]);
		
		printf("ar[%d]=%x\n", i, (ar+i));
		printf("*ar[%d]=%d\n", i, *(ar+i));

		ptr--;
	}
#endif
	ptr = &ar[0];

	for(int i=0;i<len;i++){

		printf("Value *ptr=%d & ar[%d]=%d \n", *ptr, i, ar[i]);
		//printf("Addre *ptr=%x & ar[%d]=%x\n", ptr, i, &ar[i]);
		
		printf("ar[%d]=%x\n", i, (ar+i));
		printf("*ar[%d]=%d\n", i, *(ar+i));

		ptr = ptr + 4; // +4 is required as the sizeof int is 4bytes
	}

	return 0;
}
