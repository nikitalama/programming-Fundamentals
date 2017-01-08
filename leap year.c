/*
student name:nikita lama
subject     :programming fundamental
lab no      :
roll no     :
program     :write a c program to check whether year is leap year or not using conditional/ternary operator.
date        :8jan,2017
*/
#include<stdio.h>

int main(){
	int n;
	printf("enter the year\n");
	scanf("%d",&n);
	
	if(n%400!=0)
	{
					if (n%4==0 && n%100!=0)
						{
							printf("the year is leap year\n");
						}
	
					else 
					{
						printf(" not leap");
					}
	}
	else
		{
		printf("leap");
		}
return 0;
}
