#include<stdio.h>
void main(){
        int marks[10];
        printf("please Enter a MArks:\n");
        for(int i=0;i<=9;i++){
                scanf("%d",&marks[i]);
        }
         //printf("Array Elemnets:\n");
        for(int i=0;i<=9;i++){
		if(marks[i]<35){
                printf("Roll no of Student who get marks less than 35:%d\n",i);
        }
	}
}
