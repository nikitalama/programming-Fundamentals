#include<stdio.h>
int main(){
	int i=1,n;
	printf("enter the number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		printf("%d\t",i);
		i++;
	}
	return 0;
}
