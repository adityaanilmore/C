#include<stdio.h>

void main(){
	int x=10;
	int y=20;

	int ans= ++x && --y;
	printf("%d\n",x);
	printf("%d\n",y);

	printf("%d\n",ans);
}
