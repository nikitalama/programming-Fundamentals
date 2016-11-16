/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :02
program     :write a c program to print productand sum of three numbers asked from user.
date        :nov 16,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c,sum,product;
printf("Enter first number\n");
scanf("%d",&a);
printf("Enter second number\n");
scanf("%d",&b);
printf("Enter third number\n");
scanf("%d",&c);
sum=a+b+c;
product=a*b*c;
printf("sum of three numbers is %d\n",sum);
printf("product of three numbers is %d\n",product);
getch();
return 0;
}






