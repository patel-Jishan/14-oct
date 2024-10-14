#include<stdio.h>
int main(){
int i;
for (i=1;i<=100;i++){

	if(i>=5&&i<=10||i>=60&&i<=70){
	continue;
	}
		printf("%d\n",i);
}

}
