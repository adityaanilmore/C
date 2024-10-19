//reverse an without using an extra array
#include<stdio.h>
void main(){
        int size;
        printf("Please Enter a Size:\n");
        scanf("%d",&size);

        int arr[size];
       
        printf("Please enter a ArrayElements:\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);


        }
	int i=0;
	int j=size-1;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
        printf("Reverse Elements\n");

        for(int i=0;i<size;i++){
                printf("%d\n",arr[i]);
        }





}
