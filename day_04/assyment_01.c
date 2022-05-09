#include <stdio.h>
int max(int e , int r ) {
	if(e>=r){
		return e ;
	}else{
		return r ;
	}
}
int min(int e , int r){
	if(e>=r){
		return r ;
	}else{
		return e ;
	}
}
int u,i,o,p ; /*4 numbers we compared*/
void main(){
printf("please enter four numbers :");
scanf(" %d %d %d %d" ,&u,&i,&o,&p);
int frist_compared= max(u,i);
int socend_compared=max(o,p);
int final_compared=max(frist_compared ,socend_compared);
printf("max number is %d" , final_compared);

 int frist2_compared= min(u,i);
int socend2_compared=min(o,p);
int final2_compared=min(frist2_compared ,socend2_compared);
printf("\nmin number is %d" , final2_compared);
}
