#include<stdio.h>
void main(){
	int i=12;
	int ans=++i + ++i + ++i + ++i;
	printf("%d\n",ans);
	printf("%d\n",i);
}
