#include <stdio.h>
int factorial(int k);
void main (){
	int k; /*for k is positive number*/
	printf("enter the nomber :");
	scanf(" %d", &k);
	printf("factorial of nomber is %d = %d" , k ,factorial(k));
	}
	int factorial(int k){
		int mul=1;
		for(int i=1;i<=k;i++){
		 mul=mul*i ;
		}
		return mul ;
	}