/*
student name:nikita lama
subject     :programming fundamental
lab no      :17
roll no     :
program     :write a c program to print all the even number from 1 to 100 using for loop.
date        :jan 12,2017
*/
#include<stdio.h>
int main(){
	int i,n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
		
		
	}
	return 0;
}
