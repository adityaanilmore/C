//findthe no of  pairs in array which having sum equal to x
#include<stdio.h>
void main(){
	int size;
	printf("Please Enter a Size:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Please enter a ArrayElements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	
	
	}
	int addCount=0;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
		if(arr[i]+arr[j]==12){
			addCount++;
		}
		}
	}
	printf("No of Pairs in array:%d\n",addCount);


}

