#include<stdio.h>
void main(){

	char alpha;
	printf("ENter the char: \n");
	scanf("%c",&alpha);

	if(alpha >= 65 && alpha <= 87){
	
		printf("%c is in uppercase:\n",alpha);

	}else if(alpha >= 97 && alpha <=122){
	
		printf("%c is in lowercase:\n",alpha);

	}else{
	
		printf("Enter the valid input:\n");
	}
	
}
