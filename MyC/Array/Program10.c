#include<stdio.h>
void main(){
        printf("Please Enter a size of Arry:\n");
        int size;
        scanf("%d",&size);
        int arr[size];
        printf("Plaese Enter Elemnts in array:\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);

        }
       int product=1;
        for(int i=0;i<size;i++){
                product*=arr[i];
        }
        printf("Proudct of array Elements:%d\n",product);
}
