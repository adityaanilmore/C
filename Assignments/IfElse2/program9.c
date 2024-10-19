#include <stdio.h>

void main(){
	int a,b,c;
	printf("Enter 3 numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a*a + b*b == c*c){
		printf("Pythogarien Triplet\n");
	}else{
		printf("Not Pythogarien Triplet\n");
	}
}
