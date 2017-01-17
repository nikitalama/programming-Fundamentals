#include<stdio.h>
#include<conio.h>
#define pi 3.14
void circle (r);
int main(){
    int r;
    printf("enter  the radius\n");
    scanf("%d",&r);
    circle(r);
    return 0;
}
void circle(r){
    int diameter,circum,area;

    diameter=2*r;
    circum=pi*r;
    area=pi*r*r;
    printf("diameter of circle is %d",diameter);
    printf("circum of circle is %d\n",circum);
    printf("area of circle is %d\n",area);
}
