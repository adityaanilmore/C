#include <stdio.h>

void main(){
	int x,y;
	printf("Enter 2 number :\n");
	scanf("%d%d",&x,&y);

	if (x>y){
		printf("%d is greater than %d\n",x,y);
	}else{
		printf("%d is greater than %d\n",y,x);
	}
}
		
