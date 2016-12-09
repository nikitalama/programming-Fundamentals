/*
student name:nikita lama
subject     :programming fundamental
roll no     :20
lab no      :11
program     :write a c program to check odd or even number using ternary operator
date        :9 dec,2016
*/
#include<stdio.h>
int main(){
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	(a%2==0)?printf("%d is even",a):printf("%d is odd",a);
	return 0;
}
