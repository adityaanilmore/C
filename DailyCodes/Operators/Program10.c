#include<stdio.h>

void main(){
        int x=0;
        int y=2;

        int ans= --x || ++y;
        printf("%d\n",x);
        printf("%d\n",y);

        printf("%d\n",ans);
}
