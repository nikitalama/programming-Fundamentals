#include<stdio.h>
#include<conio.h>
#define pi 3.14
int circle(r);
int main()
{
    int r;
    printf("enter the radius\n");

    scanf("%d",&r);

circle(r);
printf("diameter is %d",circle(r));


return 0;
}
int circle(r){
    int diameter;

diameter=2*r;
return diameter;
}
