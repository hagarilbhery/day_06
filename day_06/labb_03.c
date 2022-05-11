#include <stdio.h>
int func(int a , int b , int *sum, int *sub){
	*sum = a + b;
	*sub = a-b ;
}
int main(){
int x,y,summ ,subb ;
	printf("please enter value 1 :");
	scanf(" %d" , &x);
	printf("please enter value 2 : ");
	scanf(" %d" , &y);
    func(x , y, &summ, &subb);
	printf("the result of sum is :%d\n" , summ );
    printf("the result of subtraction is :%d\n" ,subb);
	
}