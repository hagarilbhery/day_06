#include <stdio.h>
int main(){
	/*taken data from user at diffirent 3 arrays*/
	int ar1[10] ,ar2[10],ar3[10] ;
	int sum1=0,sum2=0,sum3=0 ;
	printf("class_01\n");
	for(int i=0;i<10;i++){
		printf("grade_0%d is :" , i);
		scanf(" %d" , &ar1[i]);
		sum1=sum1+ar1[i] ;
		
	}
	printf("class_02\n");
	for(int i=0;i<10;i++){
		printf("grade_0%d is :" , i);
		scanf(" %d" , &ar2[i]);
		sum2=sum2+ar2[i] ;
		
		
	}
	printf("class_03\n");
	for(int i=0;i<10;i++){
		printf("grade_0%d is :" , i);
		scanf(" %d" , &ar3[i]);
		sum3=sum3+ar3[i] ;

	}
	
	/*pass & fail students */
	int pass1=0 ,pass2=0,pass3=0 ;
	int fail1=0,fail2=0,fail3=0  ;
	for(int i=0;i<10;i++){
		if(ar1[i]>50){
			pass1=pass1+1 ;
		}else {
			fail1=fail1+1 ;
		}
		}
		for(int i=0;i<10;i++){
		if(ar2[i]>50){
			pass2=pass2+1 ;
		}else {
			fail2=fail2+1 ;
		}
		}
		for(int i=0;i<10;i++){
		if(ar3[i]>50){
			pass3=pass3+1 ;
		}else {
			fail3=fail3+1 ;
		}
		}
		
	printf("1_number of passed students is :%d " , pass1+pass2+pass3);
	printf(" \n2_number of failed students is :%d" , fail1+fail2+fail3);
	
	/*sorting data to find max & min grade */
	int i, x , next ;
	for( i = 0; i < 9; i++){       
        for( x = 0; x < 10 - i - 1; x++){			
            if(ar1[x] > ar1[x + 1]){               
                next = ar1[x];
                ar1[x] = ar1[x + 1];
                ar1[x + 1] = next;
        }
    }
	}
	for( i = 0; i < 9; i++){       
        for( x = 0; x < 10 - i - 1; x++){			
            if(ar2[x] > ar2[x + 1]){               
                next = ar2[x];
                ar2[x] = ar2[x + 1];
                ar2[x + 1] = next;
        }
    }
	}
	for( i = 0; i < 9; i++){       
        for( x = 0; x < 10 - i - 1; x++){			
            if(ar3[x] > ar3[x + 1]){               
                next = ar3[x];
                ar3[x] = ar3[x + 1];
                ar3[x + 1] = next;
        }
    }
	}
	/*comparing  between ar1[9],ar2[9],ar3[9],ar1[0],ar2[0],ar3[0])*/ 
	if (ar1[9]>ar2[9] && ar1[9]>ar3[9]){
		printf("\n3_max grade is : %d" , ar1[9]);
	}else if (ar2[9]>ar1[9] && ar2[9]>ar3[9]){
		printf("\n3_max grade is : %d" , ar2[9]);
	}else {
		printf("\n3_max grade is : %d" , ar3[9]);
	}
	
	if (ar1[0]<ar2[0] && ar1[0]<ar3[0]){
		printf("\n4_min grade is : %d" , ar1[0]);
	}else if (ar2[0]<ar1[0] && ar2[0]<ar3[0]){
		printf("\n4_min grade is : %d" , ar2[0]);
	}else {
		printf("\n4_min grade is : %d" , ar3[0]);
	}
	printf("\n5_average of grades is : %d" , (sum1+sum2+sum3)/30);
		}