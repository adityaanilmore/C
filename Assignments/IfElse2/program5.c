#include <stdio.h>

void main(){
	int units,x;

	printf("Enter units : ");
	scanf("%d",&units);

	if(units < 100){
		x = units * 5;
		printf("Light Bill : %d\n",x);
	}else if(units < 300){
                x = 100 *5 + (units-100) * 7;
                printf("Light Bill : %d\n",x);
	}else{
                x = 100 * 5 + 200*7 +(units-300) * 10;
                printf("Light Bill : %d\n",x);
        } 
}
