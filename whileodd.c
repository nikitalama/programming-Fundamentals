#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=501;i<=1000;i++)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("sum is %d",sum);
	return 0;
}
