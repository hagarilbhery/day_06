#include <stdio.h>
int q ,w ;
int add(int q , int w){
	int res= q+w ;
	return res ;
}
int subtract(int q , int w){
	int res= q-w ;
	return res ;
}
int multiply(int q , int w){
	int res= q*w ;
	return res ;
}
int divide(int q , int w){
	int res= q/w ;
	return res ;
}
int and(int q , int w){
	int res= q&w ;
	return res ;
}
int or(int q , int w){
	int res= q|w ;
	return res ;
}
int not(int q){
	int res= ~q ;
	return res ;
}
int xor(int q , int w){
	int res= q^w ;
	return res ;
}
int reminder(int q , int w){
	int res= q%w ;
	return res ;
}
int increment(int q){
	int res= ++q ;
	return res ;
}
int decrement(int q){
	int res= --q ;
	return res ;
}
int id , d , f ;
void main(){
	printf("please enter your id :");
	scanf(" %d" , &id);
	switch(id){
		case 1 :
		printf(" hi , it is on add mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final=add(d,f);
		printf(" result is %d " , final);
		break ;
		case 2 :
		printf(" hi , it is on subtract mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final1=subtract(d,f);
		printf(" result is %d " , final1);
		break ;
		case 3 :
		printf(" hi , it is on multiply mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final2=multiply(d,f);
		printf(" result is %d " , final2);
		break ;
		case 4 :
		printf(" hi , it is on divide mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final3=divide(d,f);
		printf(" result is %d " , final3);
		break ;
		case 5 :
		printf(" hi , it is on and mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final5=and(d,f);
		printf(" result is %d " , final5);
		break ;
		case 6 :
		printf(" hi , it is on or mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final6=or(d,f);
		printf(" result is %d " , final6);
		break ;
		case 7 :
		printf(" hi , it is on not mode\nplease enter your number :");
		scanf(" %d" , &d);
		int final7=not(d);
		printf(" result is %d " , final7);
		break ;
		case 8 :
		printf(" hi , it is on xor mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final8=xor(d,f);
		printf(" result is %d " , final8);
		break ;
		case 9 :
		printf(" hi , it is on reminder mode\nplease enter your 2 numbers :");
		scanf(" %d %d" , &d ,&f);
		int final9=reminder(d,f);
		printf(" result is %d " , final9);
		break ;
		case 10 :
		printf(" hi , it is on increment mode\nplease enter your number :");
		scanf(" %d" , &d);
		int final10=increment(d);
		printf(" result is %d " , final10);
		break ;
		case 11 :
		printf(" hi , it is on decrement mode\nplease enter your number :");
		scanf(" %d" , &d);
		int final11=decrement(d);
		printf(" result is %d " , final11);
		break ;
	}
}




















