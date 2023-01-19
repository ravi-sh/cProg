#include <stdio.h>


int main(){
	FILE *fp = stdout;

	int n;

	fprintf(fp, "%d", 45);
	fflush(stdout);
	fprintf(stderr, "%d", 65);


	printf("%d", sizeof(void));
}
