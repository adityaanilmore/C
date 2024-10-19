#include <stdio.h>

void main(){
	int sp;
	int cp;

	printf("Enter selling Price : ");
	scanf("%d",&sp);
	printf("Enter cost Price : ");
        scanf("%d",&cp);

	int profit = sp - cp;
	printf("Profit = %d\n",profit);
}

