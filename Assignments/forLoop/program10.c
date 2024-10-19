#include <stdio.h>

void main(){

	int count = 0;
	int n = 1;

	while(n<=100){
		if(n%2==0 && n%5==0){
			count += 1;
		}
		n++;
	}

	printf("Count of numbers divisible by 2 and 5 = %d\n",count);
}

