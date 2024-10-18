// taking input from user
#include<stdio.h>
void main(){
	int arr[4];
	printf("please Enter a Array Elemnets:\n");
	for(int i=0;i<=3;i++){
		scanf("%d",&arr[i]);
	}
	 printf("Array Elemnets:\n");
        for(int i=0;i<=3;i++){
                printf("%d\n",arr[i]);
        }
}

