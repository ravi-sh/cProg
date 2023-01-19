#include <stdio.h>

/*
int main(){
//	register i = 20;
//register *p = &i;
	//printany();
//	printf("%d\n", *p);
	
	struct st m;
	struct st *s = &m;
	s->name = "HHH";
	printf("%s\n", s->name);

	//char t[20]
	float yoe = 0.9;

	if(yoe == 0.9) printf("A\n");
	else printf("B");

	float y = 4.5;
	if(y == 4.5) printf("A\n");
	else printf("B");

	char *p = "";
	printany(p);
	printf(p);

}
*/

int main(){
	//char *p = "";
        //printany(p);
        //printf(p);
	static a;
	printf("%d\n", a);

	char *s = "Turing";
	char *p = s+5;
	printf("%c %c\n", *p, s[1]);
}

void printany(char *q){

	memcpy(q, "Welcome to turing", 8);
//printf("Hello\n");
}

/*
int main(){
	int l = 30;
	static int ls = 10;
	char c = 'c';
	const char m = 'M';
	printf("Hello c!\n");
	myfunc(30);
	printf("ret=%d\n", func1());

	printf("%x\n", (void*)0);
	return 0;
}
*/
