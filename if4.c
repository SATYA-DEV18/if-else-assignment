#include<stdio.h>
void main(){

	int age;
	printf("Enter the age: \n");
	scanf("%d",&age);

	if(age>=18){
	
		printf("Eligible for Voting: \n");
	}else{
	
		printf("Not Eligible for Voting: \n");
	}
}
