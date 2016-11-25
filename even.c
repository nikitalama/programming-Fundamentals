/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :06
program     :write a c program to check the number is positive or negative
date        :25 nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int n;
printf("Enter the number:\n");
scanf("%d",&n);
if(n%2==0)
{
printf("given number is even:\n");
}
else
{
printf("given number is odd:\n");
}
getch();
return 0;
}

