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
int main(){
float r,area,circum;
printf("enter the value of radius\n");
scanf("%f",&r);
area=3.14*r*r;
circum=2*3.14*r;
printf("area of circle is %f\n",area);
printf("circumference of circle is %f\n",circum);
getch();
return 0;
}





