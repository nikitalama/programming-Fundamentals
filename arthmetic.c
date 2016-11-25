/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :06
program     :write a c program to print arthmetic operation.
date        :25 nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,addition,subtraction,division,modulus,multiplication;
printf("enter the first number:\n");
scanf("%d",&a);
printf("enter the second number:\n");
scanf("%d",&b);
addition=a+b;
subtraction=a-b;
multiplication=a*b;
division=a/b;
modulus=a%b;
printf("addition of two numbers :%d\n",addition);
printf("subtraction of two numbers :%d\n",subtraction);
printf("multiplication of two numbers :%d\n",multiplication);
printf("division of two numbers :%d\n",division);
printf("modulus of two numbers :%d\n",modulus);
getch();
return 0;
}
