#include<stdio.h>

void main(){
        int x=25;
        int ans= ++x + x++ ;
        printf("%d\n",x);
        printf("%d\n",ans);
}
