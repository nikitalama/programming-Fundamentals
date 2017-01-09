/*
student name:nikita lama
subject     : programming fundamental
roll no     :
lab no      :16
program     :write a c program to print all natural number in reverse from (n to 1)using while loop.
date        :8 jan,2016
*/
#include<stdio.h>
int main(){
	int i,n;
	printf("enter the number\n");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("%d\t",i);
		i--;
	}
	return 0;
}
