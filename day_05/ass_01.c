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
	printf("maximum of data is : %d " , arr[9]);
	printf("\nminimum of data is : %d " , arr[0]);
	
	
}