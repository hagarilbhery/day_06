#include <stdio.h>
int r=0; /*the result*/
int scaler(int *ptr1 ,int *ptr2 ){
	for(int i=0;i<4;i++){
		r=r+( *(ptr1+i) * *(ptr2+i)) ;
		
	}
	return r ;
}
int main(){
int ar1[4]={1,2,3,4};
int ar2[4]={2,3,4,5};
printf(" the result of scaler product is : %d" , scaler(ar1,ar2));
}