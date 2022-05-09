#include <stdio.h>
void main (){
int sum=0;
	int ar[10];
	for(int i=0;i<10;i++){
		printf("please enter number %d :" ,i);
		scanf(" %d" , &ar[i]);
		sum=sum+ar[i];
	}
	printf("sum of array elements = %d\n" , sum);
	float ave = sum /10 ;
	printf("average of array elements is = %.2f" , ave);
}