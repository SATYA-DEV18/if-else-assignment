#include<stdio.h>
void main(){

	int day;
	printf("ENter the day number: \n");
	scanf("%d",&day);

	if(day==1){
	
		printf("MONDAY \n");
	}else if(day==2){
	
		printf("TUESDAY \n");
	}else if(day==3){

                printf("WEDNESDAY \n");
        }else if(day==4){

                printf("THRUSDAY \n");
        }else if(day==5){

                printf("FRIDAY \n");
        }else if(day==6){

                printf("SATURDAY \n");
        }else if(day==7){

                printf("SUNDAY \n");
        }else if(day>7){

                printf("INVALID DAY NUMBER: \n Give number under 7!!");
        }
}
