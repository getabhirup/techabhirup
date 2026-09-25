//Write a c program to display odd no. from 1-n

#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter the no.");
	scanf("%d",&n);
	printf("odd number from 1 to %d\n",n);
	while(i<=n){
		printf("%d\n",i);
		i=i+2
	}
	return 0;
}

