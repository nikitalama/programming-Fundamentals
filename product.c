#include<stdio.h>
int main(){
	int n,l=0,product=1;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		l=n%10;
		n=n/10;
		product=product*l;
	}
	printf("product = %d",product);
	return 0;
}
