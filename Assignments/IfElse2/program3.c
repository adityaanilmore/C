#include <stdio.h>

void main(){
	int x;
	printf("Enter year :");
	scanf("%d",&x);

	if(x%4 == 0){
		printf("Leap year\n");
	}else{
		printf("Not a leap year\n");
	}
}
