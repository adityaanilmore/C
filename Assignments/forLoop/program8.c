#include <stdio.h>

void main(){
	int count;

	for(int i=2; i<=200 ; i+=2){
		count = count + 1;
	}

	printf("Number of even number : %d\n",count);
}
