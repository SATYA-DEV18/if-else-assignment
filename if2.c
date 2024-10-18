#include<stdio.h>
void main(){

	int num;

	printf("Enter the number to check if the number is divisible by 5 or 10 ");
	scanf("%d",&num);

	if(num % 5 == 0){
	
		printf("%d is divisible by 5\n",num);
	}else if(num % 10 == 0){
	
		printf("%d is divisible by 10\n",num);

	}else if(num % 5 == 0 && num % 10 == 0){
	
		printf("%d is divided by 5 and 10 both\n",num);
	}else{
	
		printf("%d is not divisible by 5 or 10\n",num);
	}
}
