#include<stdio.h>

void printBinaries(int num)
{
    printf("Number : %d\n", num);
    for(int i = 31; i >=0; i--){
        printf("%d ", ( num >> i) & 1 );
    }
    printf("\n");
}

int main()
{
    int num;
    int bitpos;


    printf("Enter the number and bitpostion\n");
    scanf("%d%d", &num, &bitpos);

    printBinaries(num);

    num = num | (1 << bitpos); //set the bit
    //num |= 1<< bitpos;
    printBinaries(num);

    num = num & ~(1 << bitpos); // clear bit
    //num &= ~(1 << bitpos);
    printBinaries(num);

    num = num ^ (1 << bitpos); // toggle bit
    //num ^= 1 << bitpos; 
    printBinaries(num);

    return 0;
}
