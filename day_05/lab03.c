#include <stdio.h>
/*sort numbers*/
int main(){

    int arr[10], i, y, next;    
 
   

    for(i = 0; i < 10; i++){
 printf("Please Enter the Value of num %d: " , i);
        scanf("%d", &arr[i]);
	}

    for(i = 0; i < 9; i++){       

        for(y = 0; y < 10 - i - 1; y++){          

            if(arr[y] > arr[y + 1]){               

                next = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = next;

			

        }

    }
	}

    printf("Array after sorting are: ");

    for(i = 0; i < 10; i++){

        printf("\n%d  ", arr[i]);

    }

    return 0;

}