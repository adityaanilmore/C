//sum of elememts in array
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
        int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	printf("Sum of array Elements:%d\n",sum);
}

