#include <stdio.h>
#include <string.h>

#define MAX_STRLEN 1024
static int count;
// linear search
// sorting technique(any)
// find max len string
// count all strings whose len is greater than certain num

int maxlen(char (*ptr)[MAX_STRLEN], int ele, int len_lim)
{
    int max_len = strlen(ptr[0]), len, indx = 0;

    for(int i = 0; i < ele; i++){	
	len = strlen(ptr[i]);
	if(len > len_lim) count++;
        
	if(max_len < len) { 
	    max_len = len; 
	    indx = i;
	}
    }
    return indx;
}

void sort2dArr(char (*ptr)[MAX_STRLEN], ele){
    for(int i = 0; i < ele; i++){
        	    
    }

}

int main(){
    char ptr[4][MAX_STRLEN] = { "ravi", "shwetu", "best", "friends" };

    printf("Max Len String: %s\n", ptr[maxlen(ptr, 4, 4)]);
    printf("Number of Strings which cross the Specified Len: %d\n", count);

    return 0;
}
