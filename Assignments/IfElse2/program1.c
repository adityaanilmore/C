#include <stdio.h>

void main(){
	int x;
	printf("Enter number : ");
	scanf("%d",&x);

	if(x>=1 && x<=1000){
		printf("%d is in the range 1 to 1000\n",x);
	}else{
		printf("%d is not in the range 1 to 1000\n",x);
	}
}
