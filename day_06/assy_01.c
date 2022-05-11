#include <stdio.h>

int sorting_data(int arr[],int num){
    for( int i = 0; i < 9; i++){       
        for(int y = 0; y < num - i - 1; y++){          
            if(arr[y] > arr[y + 1]){               
              int next = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = next;
				}
    }
	}
}

int main(){
	
	int ar[10],i;
	
	for(i=0;i<10;i++){
		printf("please enter value %d: " , i+1);
		scanf(" %d" , &ar[i]);
	}
	
	sorting_data(ar,10);
	
	printf("after sorting values is: \n");
	for(i=0;i<10;i++){
		printf(" %d = %d\n" ,i+1, ar[i]);
	}
}
