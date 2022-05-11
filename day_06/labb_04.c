#include <stdio.h>
int main(){
int ar[10] ;
int i;
int sum =0 ;
int *ptr ;
for(i=0;i<10;i++){
	printf("please enter value %d : " , i+1);
	scanf(" %d" , &ar[i]);
}

for(ptr=&ar[0];ptr<=&ar[9];ptr++){
	sum = sum + *ptr;
}
printf(" summation of array is : %d\n" , sum);
}
