/*
student name :nikita lama
subject      :programming fundamental
roll no      :09
lab no       :04
program      :write a c program to print area and perimeter of rectangle.
date         :21 nov,2016
*/

#include<stdio.h>
#include<conio.h>

int main(){
float l,b,area,perimeter;
printf("Enter the length of rectangle:\n");
scanf("%f",&l);
printf("Enter the breadth of rectangle:\n");
scanf("%f",&b);


area=l*b;
perimeter=2*(l+b);
printf("area of rectangle is: %f\n",area);
printf("perimeter of rectangle is: %f\n",perimeter);
getch();
return 0;
}
