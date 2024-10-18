//max number proper way
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
	for(int i=0;i<size;i++){

		if(arr[i]>num){
			num=arr[i];
		}
	}
	printf("Max Number in array:%d\n",num);

	   
}
