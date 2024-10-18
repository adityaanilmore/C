//Second MAX Number
#include<stdio.h>
void main(){
        printf("Please Enter a size of Arry:\n");
        int size;
        scanf("%d",&size);
        int arr[size];
        printf("Plaese Enter Elemnts in array:\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);

        }
        int num=-2140000000;
	int num1=-2140000000;
        for(int i=0;i<size;i++){

                if(arr[i]>num){
                        num=arr[i];
                }
        }
        printf("Max Number in array:%d\n",num);

	for(int i=0;i<size;i++){

		if(arr[i]<num && arr[i]>num1){
				num1 =arr[i];
		}
		
	
	}
	printf("Second Max Number in Array :%d\n",num1);




}
