#include<stdio.h>
void main(){

	int num1,num2;
	printf("Enter the num1: \n");
	scanf("%d",&num1);

	printf("Enter the num2: \n");
	scanf("%d",&num2);

	if(num1>num2){
	
		printf("%d is maximum between %d and %d",num1,num1,num2);

	}else if(num2>num1){
	
		printf("%d is maximum between %d and %d",num2,num1,num2);
	}
}
