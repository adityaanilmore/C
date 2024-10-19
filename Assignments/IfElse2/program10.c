#include <stdio.h>

void main(){
	int n;
	printf("Enter number of person : ");
	scanf("%d",&n);

	if(n>7){
		printf("Bus\n");
	}else if(n>5){
		printf("MUV\n");
	}else if(n>3){
		printf("SUV\n");
	}else if(n>2){
		printf("Rickshow\n");
	}else if(n>1){
		printf("Bike\n");
	}else{
		printf("Cycle\n");
	}
}

