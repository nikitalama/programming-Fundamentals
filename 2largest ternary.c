/*
student name :nikita lama
subject      :programming fundamental
roll no      :20
lab no       :11
program      :write a c program to print largest number among two numbers using ternary operator
date         :9 dec,2016
*/
#include<stdio.h>
int main(){
	int a,b;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	(a>=b)?printf("%d is largest",a):printf("%d is largest",b);
	return 0;
}
