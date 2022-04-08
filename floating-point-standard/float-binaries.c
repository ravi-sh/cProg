#include <stdio.h>

void printFloatBinaries(int num)
{
    printf("Number : %d\n", num);
    for(int i = 31; i >=0; i--){
        printf("%d ", ( num >> i)&1 );
    }
    printf("\n");
}

int main()
{
    float f = 263.3; 
    /*

    step-1, Binary for the given float number
    263 = (100000111)
    0.3 --> 0.3 x 2 = 0.6, 0
            0.6 x 2 = 1.2, 1
            0.2 x 2 = 0.4, 0
            0.4 x 2 = 0.8, 0

            0.8 x 2 = 1.6, 1
            0.6 x 2 = 1.2, 1
            0.2 x 2 = 0.4, 0
            0.4 x 2 = 0.8, 0

            0.8 x 2 = 1.6, 1
            0.6 x 2 = 1.2, 1
            0.2 x 2 = 0.4, 0
            0.4 x 2 = 0.8, 0
    0.3 = (0100 1100 1100 1100 1100 1100 1100 .......)
    263.3 = (100000111.0100 1100 1100 1100 1100 1100 1100 .......)

    Step-2, Signtific representation
    
    -> left shift the decimal point to get the exponent

    1.000001110100 1100 1100 1100 1100 1100 1100 ..... x 10 ^ 8

    sign bit - > 0 , since the positive number
    exponent - > 8, so the fraction = 8 + 127 = 135 = (1000 0111) , for the single precision
    mantisa - > 000001110100 1100 1100 1100 1100 1100 1100 .....

    Step-3, Binary
    binary = sign bit + fraction (8bits) + mantisa (23bits) <--- single precision
    binary = sign bit + fraction (11bits) + mantisa (52bits) <--- single precision
    fraction = exponent + bias

    bias = 2^(k-1) - 1 = 2 ^ (8-1) - 1 = 2^7 - 1 = 127
    bias = 2^(k-1) - 1 = 2 ^ (11-1) - 1 = 2^10 - 1 = 1024 - 1 = 1023
    k = 8 bits for single precision (32bit)
    k = 11 bits for the Double precision (64bit)

    binary = 0100 0011 1000 0011 1010 0110 0110 0110..........

    */

    int *ptr = &f;

    printFloatBinaries(*ptr);

    return 0;
}
