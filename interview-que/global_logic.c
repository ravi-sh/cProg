#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


// 1 - In what program sections the variables below will be allocated?
int val1; // zero init -> BSS
int val2 = 0; // DATA

// 2 - What is the size of structure below (foo)? //32bit
struct foo
{
    uint8_t f1:4;  //2byte
    uint16_t f2:4; //2byte
    uint32_t f3:4; //4byte
    uint8_t f4:4; //4 byte
};
// 3 - Assuming that fields f1 -- f4 can only take values from 0 to 15, reduce the size of structure foo

//2bytes 

// 4 - Construct an array of 5 function pointers that can point to type of functions like func1 below
int* func1(int* f);

int *(*ptr_arr[5])(int*)= {func1, func2, func3, func5, func6};
int *(*ptr)(int*) = func1;


// 5 - Write a function that can reverse an order of elements in an array with char type elements. Reverse the array below (arr) using this funciton 
char arr[5] = {1,2,3,4,5};
    
int main()
{
    printf("Hello world\n");
    return 0;
}


