/*
student name:nikita lama
subject     :programming fundamental
roll no     :09
lab no      :08
program     :write a c program to use assignment
date        :30 nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    a+=b;
    a-=b;
    a*=b;
    a/=b;
    printf("+=%d",a);
    printf("-=%d",a);
    printf("*=%d",a);
    printf("/=%d",a);
    getch();
    return 0;
}
