/*
student name:nikita lama
subject     :programming fundamental 
roll no     :20
lab no      :11
program     :write a c program to print largest number among three number using ternary operator
*/
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
(a>=b&&a>=c)?printf("%d is largest",a):(b>=a&&b>=c)?printf("%d is largest",b):printf("%d is largest",c);
return 0;
}
