/*
student name:nikita lama
subject     :programming fundamental
lab no      :
roll no     :
program     :write a c program to check whether character is an alphabet or not using ternary operator
date        :8jan,2017
*/
#include<stdio.h>
int main(){
char a;
int n;
printf("enter any character\n");
scanf("%c",&a);
n=a;
(n>=65&&n<=90)||(n>=97&&n<=122)?printf("the character is alphabet"):printf("the character is not alphabet");
return 0;
}
