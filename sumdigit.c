#include<stdio.h>
int main(){
	int n,l=0,sum=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		l=n%10;
		n=n/10;
		sum=sum+l;
	}
	printf("sum = %d",sum);
	return 0;
}
