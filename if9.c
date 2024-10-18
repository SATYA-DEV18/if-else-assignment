#include<stdio.h>
void main(){

	int num;
	printf("ENter the number : \n");
	scanf("%d",&num);

	if(num>=1 && num<35){
	
		printf("D Grade\n");
	}else if(num>=35 && num<50){

                printf("C Grade\n");
        }else if(num>=50 && num<75){

                printf("B Grade\n");
        }else if(num>=75 && num<100){

                printf("A Grade\n");
        }
}
