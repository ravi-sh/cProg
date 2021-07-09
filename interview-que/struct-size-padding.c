#include <stdio.h>

// structure 1
typedef struct _st1{
	short int a;
	char b;  // padding is not required
}st1;

// structure 4
typedef struct _st4{
	char b; // 1bytes of padding is required
	short int a;
}st4;


// structure B
typedef struct structb_tag
{
   short int   s;
   char        c; // in between s and c no padding
   int         i; // in between c and i 1byets padding
} structb_t;

// structure C
typedef struct structc_tag
{
   char        c; // in between c and d 7bytes padding
   double      d; 
   int         s; // expect no padding, structure level 
   		  //padding will happen (4bytes padding), so the sie is 24bytes 
} structc_t; // expected size - 20 bytes, but actual is 24 bytes

// structure D
typedef struct structd_tag
{
   double      d; // 8ytes
   int         s; // 4bytes
   char        c; // 4bytes
} structd_t;

struct xyz {
	int a;   //4 byte
	int t;   //4 byte
	float b; //4 byte
	double d;// 8 byte
	char e;  // 1 byte
	char f;  // 1 byte
};

int main(){
	st1 ob1;
	st4 ob4;

	structc_t obc;
	structc_t structc_array[3];

	structd_t obd;
	struct xyz obx;

	printf("%ld\n", sizeof(ob1));
	printf("%ld\n", sizeof(ob4));
	printf("%ld\n", sizeof(obc)); // expected-20bytes but actual-24 bytes, structure arg padding	
	printf("%ld\n", sizeof(structc_array));

	printf("%ld\n", sizeof(obd));
	printf("%ld\n", sizeof(obx));

	return 0;
}
