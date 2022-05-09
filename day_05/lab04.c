#include <stdio.h>
int main(){
	int ar[10] , i;
	for( i=0;i<10;i++){
		printf("please enter number %d :" ,i);
		scanf(" %d" , &ar[i]);
	}
	int search ;
	printf("enter the value you search :");
scanf(" %d" , &search);
int time =0 ;
for (i=0;i<10;i++){
	if(search==ar[i]){
		
		time =time+1 ;
	}
	}if(time>0){
printf(" search repeat %d times" ,time);
	}else{
		printf("value not exist");
}}