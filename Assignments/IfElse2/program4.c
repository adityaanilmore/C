#include <stdio.h>

void main(){
	char ch;
	printf("ENter a letter : ");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("Vovel\n");
	}else{
		printf("Consonant\n");
	}
}

