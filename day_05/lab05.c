#include <stdio.h>
int main(){

    int arr[10], i, x, next;  
	
    /*save data*/
    for(i = 0; i < 10; i++){
 printf("Please Enter the Value of num %d: " , i);
        scanf("%d", &arr[i]);
	}
	
	/*sort*/
	for(i = 0; i < 9; i++){       

        for(x = 0; x < 10 - i - 1; x++){          

            if(arr[x] > arr[x + 1]){               

                next = arr[x];

                arr[x] = arr[x + 1];

                arr[x + 1] = next;

			

        }

    }
	}
	
	/*ask user to enter search value*/
	int s ;
	printf("enter value of search :");
	scanf(" %d" , &s);
	
	/*binary search*/
	int low =0;
	int hi = 9;
	int mid = (hi+low)/2 ;
	for(i=0;i<9;i++){
	if(hi>low){
	    if(arr[mid]>s){
			hi = mid -1 ;
			mid = (hi+low)/2 ;
		}else if(arr[mid]<s){
			low = mid +1;
			mid = (hi+low)/2 ;
		}else{
			printf("value found");
			break ;
		}
	}else{
		printf("value not found");
		break ;
	}
	}
	
	
	
	
	
	
}