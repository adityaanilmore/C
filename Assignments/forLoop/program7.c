#include <stdio.h>

void main(){
	int num;
	int count = 0;

	printf("Enter a number : ");
	scanf("%d",&num);

	for(int i=2; i<=10 ; i++){
		if(num%i==0){
			count+=1;
		}
	}
	printf("Number of divisors of %d = %d\n",num,count);
}

