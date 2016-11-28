/*
Name:Nikita Lama
Subject:Programming Findamental
Program:Write a program to enter the marks od seven subjects and calculate total,average and percent
Lab No:7
Date:28th Nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,g,total,avg,percent;
printf("Enter the marks of the first subjects\n");
scanf("%f",&a);
printf("Enter the marks of the second subjects\n");
scanf("%f",&b);
printf("Enter the marks of the third subjects\n");
scanf("%f",&c);
printf("Enter the marks of the fourth subjects\n");
scanf("%f",&d);
printf("Enter the marks of the fifth subjects\n");
scanf("%f",&e);
printf("Enter the marks of the first subjects\n");
scanf("%f",&f);
printf("Enter the marks of the first subjects\n");
scanf("%f",&g);
total=(a+b+c+d+e+f+g);
avg=(total/7);
percent=(total/7);
printf("The total marks obtained is %.2f",total);
printf("The average marks obtained is %.2f",avg);
printf("The percentage obtained is %.2f",percent);
getch();
return 0;




}
