#include<stdio.h>
#include<conio.h>
#define pi 3.14
void circle();
int main(){
    circle();

    return 0;
}
void circle(){
    int r,diameter,circum,area;
    printf("enter the radius\n");
    scanf("%d",&r);
    diameter=2*r;
    circum=pi*r;
    area=pi*r*r;
    printf("diameter of circle is %d\n",diameter);
    printf("circum of circle is %d\n",circum);
    printf("area of circle is %d\n",area);
}
