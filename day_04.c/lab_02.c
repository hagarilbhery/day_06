#include <stdio.h>
/*lab_02*/
int n=10 , m=20 ;
void My(void);
void main(void) {
	printf("x before swap %d\n" , n);
	printf("y before swap %d\n" , m);
	n = 20;
	m =10 ;
My();

 }
void My(void){
	printf("x after swap %d\n" , n);
	printf("y after swap %d" , m);
}