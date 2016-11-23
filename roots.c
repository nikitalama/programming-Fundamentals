/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :05
program     :write a c program to find roots of quadratic equation  and value are assigned from users
date        :23 nov, 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a1,a2,a,b,c,Dis;
printf("enter the first coefficient:\n");
scanf("%f",&a);
printf("enter the second coefficient:\n");
scanf("%f",&b);
printf("enter the third coefficient:\n");
scanf("%f",&c);
Dis=(b*b)-4*a*c;
a1=(-b+pow(Dis,0.5))/(2*a);
a2=(-b-pow(Dis,0.5))/(2*a);
printf("the first root of quadratic equation :%f\n",a1);
printf("the second root of quadratic equation :%f\n",a2);
getch();
return 0;
}
