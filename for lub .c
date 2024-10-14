# include<stdio.h>
int main(){
	printf("enter any table :");
	int num;
	scanf("%d",&num);
	int i;
	for(i=1;i<=10;i++){
		printf("**********%d*%d=%d**********\n",num,i,num*i);
	}
}
