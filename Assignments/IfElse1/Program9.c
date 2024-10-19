#include<stdio.h>
void main(){
	int marks=10;
	if(marks >91 && marks<101){
		printf("Grade is A\n");
	}
	else if(marks <91 && marks>71){
		printf("Grade is B\n");
	}
	else if(marks <70 && marks>51){
		printf("Grade is C\n");
	}
	else{
		printf("Grade is D\n");
	}
}
