#include<stdio.h>
void main(){
        int size;
        printf("Please Enter a Size:\n");
        scanf("%d",&size);

        int arr[size];
        int arr1[size];
        printf("Please enter a ArrayElements:\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);


        }
        for(int i=0;i<size;i++){
               arr1[size-1-i]=arr[i];
	}


	int cheakPalindrome=0;
	for(int i=0;i<size;i++){

	if(arr1[i]!=arr[i]){
		cheakPalindrome=1;
		break;
	
	}
	
	}
	if(cheakPalindrome){
	
	printf("is not palindrome");
	}
	else
	
	{
	printf("is palindrome");
	}

	

}
