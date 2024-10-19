#include <stdio.h>

void main(){
	float marks;
	printf("Enter Marks : ");
	scanf("%f",&marks);

	if (marks > 85){
		printf("Medical\n");
	}else if (marks < 85 && marks > 75){
                printf("Engineering\n");
	}else if (marks < 75 && marks > 65){
                printf("Pharmacy or Bachelor in science\n");
	}else{
		printf("Ghari Basss\n");
	}
}

