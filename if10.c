#include<stdio.h>
void main(){

	int n1,n2,n3;
	printf("Enter three sides of triangle: \n");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1+n2+n3==180){
	
		printf("The triangle is valid: because n1+n2+n3 = %d  \n",n1+n2+n3);
	}else{
	
		printf("The triangle is not valid because n1+n2+n3 = %d \n",n1+n2+n3);
	}

}
