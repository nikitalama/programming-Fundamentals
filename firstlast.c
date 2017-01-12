#include<stdio.h>
int main(){
	int n ,l=0,f=0;
	printf("enter the number\n");
	scanf("%d",&n);
	
		l=n%10;
		while(n>9)
	{
		f=n%10;
		n=n/10;
	}
	printf("first digit = %d",f);
	printf("last digit = %d",l);
	return 0;
}
