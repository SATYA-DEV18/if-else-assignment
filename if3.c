#include<stdio.h>
void main(){

	int num;
	printf("enter the num: \n");
	scanf("%d",&num);

	if(num%7==0){
	
		if(num>21){
		
			printf("%d is divisible 7  and greater than 21\n",num);
		}else if(num<21){
		
			printf("%d is divisible by 7 and less than 21\n",num);
		}else{
		
			printf("%d is not divisible by 7\n",num);
		}
	}
}
