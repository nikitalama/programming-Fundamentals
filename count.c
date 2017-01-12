#include<stdio.h>
int main(){
	int n,l,count=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		l=n%10;
		n=n/10;
		count++;
	}
	printf("count =  %d",count);
	return 0;
}	
