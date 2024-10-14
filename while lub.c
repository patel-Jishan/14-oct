#include<stdio.h>
int main(){
	printf("enter your number:");
	int num;
	scanf("%d",&num);
	int i=1;
	while(i<=10){
		printf("*************************************%d*%d=%d*************************************************",num,i,num*i);
		i++;
	}
	
	
}
