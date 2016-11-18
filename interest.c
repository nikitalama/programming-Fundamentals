/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :o3
program     :write a c program to print simple interest.
date        :nov18,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float P,T,R,interest;
printf("Enter the value of principal\n");
scanf("%f",&P);
printf(" Enter the value of rate\n");
scanf("%f",&R);
printf("Enter the value of time\n");
scanf("%f",&T);
interest=(P*T*R)/100;
printf(" interest is :%f",interest);
getch();
return 0;
}


