#include <stdio.h>

void main(){
	float marks;
	
	printf("Enter marks : ");
	scanf("%f",&marks);

	if(marks >= 80.00){
		printf("First class with distinction\n");
	}else if(marks >= 70.00){
                printf("First class\n");
        }else if(marks >= 60.00){
                printf("Second class with distinction\n");
        }else if(marks >= 50.00){
                printf("Third class with distinction\n");
        }else if(marks >= 40.00){
                printf("Pass\n");
        }else{
		printf("Fail\n");
	}
}
