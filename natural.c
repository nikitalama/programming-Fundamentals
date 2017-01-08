/*
student name:nikita lama
subject     : programming fundamental
roll no     :
lab no      :16
program     :write a c program to print all natural number from 1 to n using while loop
date        :8 jan,2016
*/
#include<stdio.h>
int main(){
	int i=1,n;
	printf("enter the number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
	return 0;
}
