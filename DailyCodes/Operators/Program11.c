#include<stdio.h>
void main(){
        int x=5;
        int y=7;

        int ans= x++ | --y;
        printf("%d\n",x);
        printf("%d\n",y);

        printf("%d\n",ans);
}
