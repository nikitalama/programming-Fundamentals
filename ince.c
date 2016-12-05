/*
student name:nikita lama
subject     :programming fundamental
roll no     :20
lab no      :09
program     :write a program to demonstration of working of increment and decrement operator
date        :5 dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("post increment operator is%d\n",a++);
    printf("pre increment operator is%d\n",++a);
    printf("post decrement operator is%d\n",a--);
    printf("pre decremnt operator is%d\n",--a);
    getch();
    return 0;
}
