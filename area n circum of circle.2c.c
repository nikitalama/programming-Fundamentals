/*
student name:nikita lama
subject     :programming fundamental
roll no.    :09
lab no      :03
program     :write a c pgram to calculate area and circumference of circle having radius r taken from user.
date        :nov18,2016
*/
#include<stdio.h>
#include<conio.h>
#incude<math.h>
#define PI 3.14
int main(){
float r,area,circum,PI=3.14;
printf("enter the value of radius\n");
scanf("%f",&r);
area=PI*pow(r,2);
circum=2*PI*r;
printf("area of circle is %f\n",area);
printf("circumference of circle is %f\n",circum);
getch();
return 0;
}





