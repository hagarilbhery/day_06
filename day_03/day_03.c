/*lecture_03*/

#include <stdio.h>
void main(){

/*Lab_01
C code print your name 10 times.*/
int i ;
for(i=0 ; i<5 ;i++){
	printf("Hajar\n") ;
}

/*Lab_02
C code print frist 10 natural numbers.*/
int o ;
for(o=1;o<=10;o++){
	printf("%d  ", o);
}

/*Lab_03
 C code to read 10 numbers from user ,
 and find their summation & average.*/
 int n , sum=0 ,N ;
for(n=0;n<10;n++){
	printf("number_%d :" , n);
	scanf(" %d" , &N) ; 
	sum+=N ;
}
printf("the sum of 10 numbers is : %d" , sum) ;
printf("\nthe average is   :%0.2f" , sum/10.00);

/*Lab_04
C code ask user to enter result of 3*4 ,
incase user enter correct print (thank you)...any thing another print 
(try again) untill user enter correct answer.*/
int m ;
printf("Enter the answer of 3 * 4 = ")	;
scanf(" %d", &m);
while(m!=12){
	printf("Not correct . Please try again : ");
	scanf(" %d" ,&m);
}
printf("Thank you ");

/*Lab_05
C code to display the multiplication table of given number.*/
int g,z ;
printf("Enter the number to display its multiplication table : ");
scanf(" %d" , &g) ;
for(z=1;z<=6;z++){
	printf("\n%d * %d = %d" ,g,z,g*z);
}

/*Lab_06
C code to calculate the factorial of an integer entered by user ;
using while loop.*/
int integer,factorial=1 ;
printf("Enter an integer : ");
scanf(" %d" , &integer);
do {
	factorial*=integer;
	--integer ;
}while(integer!=0);
printf("factorial is : %d" , factorial);

/*Assyment_01
C code to ask user to enter 2 numbers and print their sum ,
this program should never ends until the user close window.*/
int num1 , num2 ;
while(1){
	/*OR for(;;)*/
	printf("\n\nplease enter first number ");
    scanf(" %d" , &num1);
    printf("please enter socend number ");
    scanf(" %d" , &num2);
	printf("the result is  %d" , num1+num2);
}


/*Assyment_02
C code to ask user about his id if it true (print to enter password and if it too true ...wlcome him ,
(just 3 trials to try enter true password) .. if ID false print you are not registered.*/


/* Hint ...i tried a lot With LOOPS but it not did one of 3 propabilities i want*/
int ID , password ;
printf("please enter your ID : ");
scanf(" %d" , &ID);
	switch(ID){
	    case 1234 :
		printf("please enter your password :");
		scanf(" %d" , &password);
	    if (password==7788){
			printf("welcome Ahmed");
		}else {
			printf("try again :");
		    scanf(" %d" , &password);
			if(password==7788){
				printf("welcome Ahmed");
			}else{
				printf("try again :");
		    scanf(" %d" , &password);
			if(password==7788){
				printf("welcome Ahmed ");
			}else{
				printf("incorrect password for 3 times. no more tries");
			}
			}
		}
		break;
		
		
		 case 5678 :
		printf("please enter your password :");
		scanf(" %d" , &password);
	    if (password==5566){
			printf("welcome amr");
		}else {
			printf("try again :");
		    scanf(" %d" , &password);
			if(password==5566){
				printf("welcome amr");
			}else{
				printf("try again :");
		    scanf(" %d" , &password);
			if(password==5566){
				printf("welcome amr");
			}else{
				printf("incorrect password for 3 times. no more tries");
			}
			}
		}
		break;
		
		
		 case 9870 :
		printf("please enter your password :");
		scanf(" %d" , &password);
	    if (password==1122){
			printf("welcome wael");
		}else {
			printf("try again :");
		    scanf(" %d" , &password);
			if(password==1122){
				printf("welcome wael");
			}else{
				printf("try again :");
		    scanf(" %d" , &password);
			if(password==1122){
				printf("welcome wael");
			}else{
				printf("incorrect password for 3 times. no more tries");
			}
			}
		}
		break;
		default :
	printf("you are not registered");
		break;
		
		
	}

	
	/*Assyment_03
	C code print pyramid of stars with height enter by user.*/
	
   int p, space, height, c = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &height);
   for (p = 1; p <= height; ++p, c= 0) {
      for (space = 1; space <= height - p; ++space) {
         printf("  ");
      }
      while (c != 2 * p - 1) {
         printf("* ");
         ++c;
      }
      printf("\n");
   }
}