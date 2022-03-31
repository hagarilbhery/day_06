#include <stdio.h>
void main () {
/*Lab_01
C code to print the false value and true value on GCC. */
int f=7&&0 ;
    printf("false value in gcc = %d ", f );
int t=7||0 ;
    printf("\ntrue value in gcc = %d ", t );

/*Lab_02
C code to calculate employee salary basad on working hours ,
 hour rate=50 .
but if working hours are less than 40 hours ; a 10% deduction will be applied . */
float hours ; 
    printf("\nplease enter your working hours:");
    scanf(" %f" , &hours) ;
	float salary=50*hours ;
if( hours<40){ 
    printf("your salary is: %f" , salary = salary-(.1*salary) ) ;
}else{
	printf("your salary is:%f" , salary);
}

/*Lab_03
C code to check if the number is even or odd. */ 
int numer ;
    printf("\nplease enter numer:");
    scanf(" %d" , &numer);
int res=numer%2 ;
if(res==0){
	printf("numer is even") ;
}else{
	printf("numer is odd") ;
}

/*Lab_04
C code to ack user to enter his grade,
 and the program will print his rating. */
int grade ;
   printf("\nplease enter num ");
   scanf(" %d" , &grade) ;
if(grade>=0 && grade<50){
    printf("your rating is failed") ;
}else if (grade >=50 && grade <65){
    printf("your rating is normal") ;
}else if (grade>=65 && grade<75){
    printf("your rating is good") ;
}else if (grade>=75 && grade<85){
	printf("your grade is very good");
}else if (grade>=85){
    printf("your grade is excellent");
}

/*Lab_05
C code ask the user to enter his ID and print his name available IDs,
any other IDs will print Wrong ID. */
int ID ;
    printf("\nplease enter your ID:");
    scanf(" %d" , &ID);
switch(ID){
case 1234: 
    printf("welcome Ahmed");
  break ;
case 5678: 
    printf("welcome Yousef");
  break ;
case 1145: 
    printf("welcome Mina");
  break ;
default: 
    printf("wrong ID ");
	break ;
	}

	/*Assyment_01
	C code to ask user to enter 10 numbers , 
	and ask him to enter another number to search on it is 10 numbers ;
	print it is location if it is found ,
	if it is not found.. print number not exist.*/
int number_1,number_2,number_3,number_4,number_5,number_6,number_7,number_8,number_9,number_10 ;
    printf("\nenter number_1: ") ;
    scanf(" %d", &number_1);
    printf("enter number_2: ") ;
    scanf(" %d", &number_2); 
    printf("enter number_3: ") ;
    scanf(" %d", &number_3);
    printf("enter number_4: ") ;
    scanf(" %d", &number_4);
    printf("enter number_5: ") ;
    scanf(" %d", &number_5);
    printf("enter number_6: ") ;
    scanf(" %d", &number_6);
    printf("enter number_7: ") ;
    scanf(" %d", &number_7);
    printf("enter number_8: ") ;
    scanf(" %d", &number_8);
    printf("enter number_9: ") ;
    scanf(" %d", &number_9);
    printf("enter number_10: ") ;
    scanf(" %d", &number_10);
 int value ;
    printf("enter the value to search: ");
    scanf(" %d" , &value);
 if (value==number_1){
	printf("value is exist at element number_1") ;
 }else if (value==number_2){
	printf("value is exist at element number_2") ;
 }else if (value==number_3){
	printf("value is exist at element number_3") ;
 }else if (value==number_4){
	printf("value is exist at element number_4") ;
 }else if (value==number_5){
	printf("value is exist at element number_5") ;
 }else if (value==number_6){
	printf("value is exist at element number_6") ;
 }else if (value==number_7){
	printf("value is exist at element number_7") ;
 }else if (value==number_8){
	printf("value is exist at element number_8") ;
 }else if (value==number_9){
	printf("value is exist at element number_9") ;
 }else if (value==number_10){
	printf("value is exist at element number_10") ;
 }else {
	printf("number not exist") ;
 }

/*Assyment_02
C code to ask user about him Id ; if it is correct ..
ask him about password (if password correct; print his user name ...
 not valid password ; print In correct password ),
 if Id not valid ; print In correct Id. */
 int Id ;
int password ;
    printf("\nplease enter your Id : ") ;
	scanf(" %d", &Id);
switch(Id){
case 1111 :
	printf("please enter your password : ");
	scanf(" %d" , &password) ;
if(password==1117){
	printf("Welcome Hajar") ;
}else{
	printf("In correct password") ;
		}
  break ;
case 2222 :
	printf("please enter your password : ");
	scanf(" %d" , &password) ;
if(password==2227){
	printf("Welcome Hureia") ;
}else{
	printf("In correct password : ") ;
}
  break ;
case 3333 :
	printf("please enter your password : ");
	scanf(" %d" , &password) ;
if(password==3337){
	printf("Welcome Gamila") ;
  }else{
	printf("In correct password") ;
}
  break ;
default:
	printf("In correct Id");
  break ;
}

/*Assyment_03 
Ccode ask user to enter 3 numbers and print maximum number of them. */
int x,y,z ;
printf("\nEnter number 1 : ");
scanf(" %d" , &x);
printf("Enter number 2 : ");
scanf(" %d" , &y);
printf("Enter number 3 : ");
scanf(" %d" , &z);
if (x>y && x>z){
	printf("Maximum number is %d" , x);
}else if (y>x && y>z){
	printf("Maximum number is %d" , y);
}else if (z>x && z>y){
	printf("Maximum number is %d" , z);
}
}