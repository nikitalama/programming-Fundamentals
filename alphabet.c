/*
student name:nikita lama
subject     :programming fundamental
roll no     :20
lab no      :14
program     :write a c program to check character assigned from user is alphabet or not
date        :21 dec,2016
*/
#include<stdio.h>
int main(){
	char ch;
	int ASCII;
	printf("Enter any character\n");
	scanf("%c",&ch);
	ASCII=ch;
	if((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))
	{
		printf("it is an alphabet");
	}
	else
	{
		printf("it is not alphabet");
	}
	return 0;
}
	     
