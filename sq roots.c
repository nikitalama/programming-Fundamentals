/*Name:Nikita Lama
Subject:Programming Fundamental
Program:Write a program to enetr any number and calculate its square roots
Roll no:
Lab No:3
Date:16thNov,2016*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x,sr;
    printf("enter the value of x\n");
    scanf("%d",&x);
    sr=sqrt(x);
    printf("the square roots of the number is %d",sr);
    getch();
    return 0;
}
