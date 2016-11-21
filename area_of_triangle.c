/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :04
program     :write a c program to print area of triangle.
date        :21 nov,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,b,c,s,E,area;
printf("enter first side of triangle\n");
scanf("%f",&a);
printf("enter second side of triangle\n");
scanf("%f",&b);
printf("enter the third side of the triangle\n");
scanf("%f",&c);
s=(a+b+c)/2;
E=s*(s-a)*(s-b)*(s-c);
area=pow(E,0.5);
printf("the area of the triangle is %f",area);


getch();
return 0;
}




	








 