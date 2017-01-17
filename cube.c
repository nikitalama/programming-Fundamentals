#include<stdio.h>
#include<conio.h>
#include<math.h>
void cube();
int main()
{
cube();

return 0;
}
void cube(){
    int a,cube;
printf("enter the number\n");
scanf("%d",&a);
cube=pow(a,3);
printf("cube is %d",cube);
}
