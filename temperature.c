/*
student name:nikita lama
subject     :programming fundamental 
roll no     :09
lab no      :05
program     :write a program to read temperature in fahrenheit and convert it into centigrade 
date        : 23 nov,2016
*/
#include<stdio.h>
int main(){
float f,c;
printf("enter the temperature in fahrenheit:\n");
scanf("%f",&f);
c=0.55*(f-32);
printf("temperature in centigrade is:%f\n",c);
return 0;
}	
