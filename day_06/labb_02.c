#include <stdio.h>
int sum(int *pr1 , int *pr2){
	return *pr1 + *pr2 ;
}
int main(){
	int t ,y ;
	printf("please enter value 1 :");
	scanf(" %d" , &t);
	printf("please enter value 2 : ");
	scanf(" %d" , &y);
printf("the result is :%d" , sum(&t , &y));
	}