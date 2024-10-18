/*Ques : Given an array of integers, change the value of
all odd indexed elements to its second multiple and
increment all even indexed value by 10.*/


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
       
        for(int i=0;i<size;i++){
		if(i%2==0){
			arr[i]+=10;
		}else{
		arr[i]*=2;
		}
        }
	printf("Array with Required Operations:\n");
	for(int i=0;i<size;i++){
	printf("%d\n",arr[i]);
	}
}

