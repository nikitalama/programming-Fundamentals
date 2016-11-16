/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :02
program     :write a c program to print area of triangle;base and height are asked from user.
date        :nov16,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int b,h,area;
printf("enter value of base\n");
scanf("%d",&b);
printf("enter value of height\n");
scanf("%d",&h);
area=(b*h)/2;
printf("area of triangle is %d\n",area);
getch();
return 0;
}




