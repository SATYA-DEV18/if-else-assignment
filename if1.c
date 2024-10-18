#include<stdio.h>
void main(){

	int num;

	printf("Enter the number to check if the number is positive :\n ");
	scanf("%d",&num);

	if(num>0){
	
		printf("%d is positive number..!!\n",num);
	}else{
	
		printf("%d is negative\n",num);
	}
}
