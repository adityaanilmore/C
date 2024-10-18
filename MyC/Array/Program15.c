//Passing Array to function:
//yes can be done
//same code write for variable
//when we pass an array as an argument to a function address get passed.first elements adddress get passed becz overall address of an array is defined by address of an first element in array.:wq
 
#include<stdio.h>

void fun(int a[]){
	a[0]=10;


}
void main(){
	int arr[5]={1,2,3,4,5};
	printf("%d\n",arr[0]);
	fun(arr);
	printf("%d\n",arr[0]);
}
	




