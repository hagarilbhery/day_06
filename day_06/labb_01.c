#include <stdio.h>
int main(){
	int x = 10 ;
	int* ptr = &x ;
	printf("x before change :%d" , x);
	*ptr = 20 ;
	printf("\nx before change :%d" , x);
	
	}