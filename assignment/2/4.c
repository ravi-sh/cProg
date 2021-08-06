#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num, sum = 0, avg, t, min, max;
    if(argc < 2) {
        puts("Exception: a.out <ARG1> <ARG2> <ARG3> <ARG4> ....ARGn");
	exit(0);
    }

    num = argc-1;
    min = atoi(argv[1]);
    max = atoi(argv[1]); 

    while(num != 0){
        t = atoi(argv[num--]);
	sum = t + sum;

	if(t > max) max = t;
	if(t < min) min = t;
	
    }

    avg = sum/(argc-1);

    printf("sum: %d and avg: %d\n", sum, avg);
    printf("Min: %d and Max: %d\n", min, max);

    return 0;
}
