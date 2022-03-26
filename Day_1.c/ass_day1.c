#include <stdio.h>
void main() {

/*assyment 1*/
printf("    *    \n"
       "   ***   \n"
	   "  *****  \n"
       " ******* \n" 
       "*********") ;
	   
/*assyment 2*/
int num1 ;
int num2 ;
int num3 ;
printf("\n\nplease enter nom 1 :") ;
scanf(" %d" , &num1) ;
printf("please enter nom 2 :") ;
scanf(" %d" , &num2) ;
printf("please enter nom 3 :") ;
scanf(" %d" , &num3) ; 
printf("num 3: %d" , num3) ;
printf("\nnum 2: %d" , num2) ;
printf("\nnum 1: %d" , num1) ;

/*assyment 3*/
int a ;
int b ; 
printf("\n\nplease enter number a:") ;
scanf(" %d" , &a) ;
printf("please enter number b:") ;
scanf(" %d" , &b) ;
printf(" a + b = %d " , a+b  );
printf("\n a - b = %d " , a-b );
printf("\n a & b = %d " , a&b  );
printf("\n a | b = %d " , a|b  );
printf("\n a ^ b = %d " , a^b  );
}