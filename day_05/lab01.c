#include <stdio.h>
void main (){
	int i;
	int ar[10];
	for(i=0;i<10;i++){
		printf("please enter number %d :" ,i);
		scanf(" %d" , &ar[i]);
	}
	printf("the value in reversed order ");
	for(i=9;i>=0;i--){
		printf(" \n%d" , ar[i]);
		
	}
}