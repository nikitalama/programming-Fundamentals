/*
student name :nikita lama
subject      :programming fundamental
roll no      :09
lab no       :02
program      :write a c program to print product of two numbers asked from users.
date         :nov 16,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b, product;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
product=a*b;
printf("product of two number is %d",product);
getch();
return 0;
}
