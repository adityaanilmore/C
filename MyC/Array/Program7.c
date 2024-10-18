//In array continous memory allocation
//means data is stored in continous manner in mememory//first element of array is called oveall address of an aarray
#include<stdio.h>
void main(){
        int arr[12];
        printf("please Enter a Array Elemnets:\n");
        for(int i=0;i<=11;i++){
                scanf("%d",&arr[i]);
        }
	for(int i=0;i<=11;i++){
	printf("%p\n",&arr[i]);
	}
	
}
