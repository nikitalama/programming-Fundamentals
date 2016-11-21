/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :04
program     :write a c program to print area and volume of sphere.
date        :21 nov,2016
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main(){
float R,area,volume;
printf("enter the value of radius:\n");
scanf("%f",&R);
area=4*PI*pow(R,2);
volume=((4/3)*PI*pow(R,3));
printf("area of sphere is:%f\n",area);
printf("volume of sphere is:%f\n",volume);
getch();
return 0;
}

