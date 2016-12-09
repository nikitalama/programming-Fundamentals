/*
student name:nikita lama
subject     :programming fundamental
roll no     :20
lab no      :11
program     :write a c program to print largest number among three number using if else if ladder
date        :09 dec,2016
*/
#include<stdio.h>
int main(){
	int x,y,z;
	printf("enter the first number\n");
	scanf("%d",&x);
	printf("enter the second number\n");
	scanf("%d",&y);
	printf("enter the third number\n");
	scanf("%d",&z);
	if (x>=y)
	{
		if(x>=z)
		{
			printf("%d is largest",x);
		}
	}
	else if(y>=z)
	{
		printf("%d is largest",y);
	}
	else
	{
		printf("%d is largest",z);
	}
	return 0;
} 
