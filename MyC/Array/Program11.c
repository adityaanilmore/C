//Decending Ascending order +max Min elemnts in array
//buuble sort
//Ascending Order same but some changes
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
		for(int j=0;j<size-1;j++){

		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;

                }
		}
	}
	printf("Ascending  Order array:\n");
	  for(int i=0;i<size;i++){
                printf("%d\n",arr[i]);

        }
        printf("max Element Elements:%d\n",arr[size-1]);
}
