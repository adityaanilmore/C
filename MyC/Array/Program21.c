//reverse an array 
#include<stdio.h>
void main(){
        int size;
        printf("Please Enter a Size:\n");
        scanf("%d",&size);

        int arr[size];
	int arr1[size];
        printf("Please enter a ArrayElements:\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);


        }
        for(int i=0;i<size;i++){
               arr1[size-1-i]=arr[i];        
        }
        printf("Reverse Elements\n");

	for(int i=0;i<size;i++){
		printf("%d\n",arr1[i]);               
	}





}

