#include <stdio.h>
/*lab_01*/
int Max(int x , int y );
void main(void) {
	int x,y ;
	printf("please enter nom 1 :");
	scanf(" %d" , &x);
	printf("please enter nom 2 :");
	scanf(" %d" , &y);
	int max = Max(x,y);
	printf("max nom is :%d", max);
}
int Max(int x , int y ){
	if(x<y){
		return y ;
	}else{
		return x ;
	}
}