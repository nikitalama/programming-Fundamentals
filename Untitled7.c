#include<stdio.h>
#include<conio.h>
#include<math.h>
int cube();
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
 cube(a);
 printf("cube is %d",cube(a));



return 0;
}
 int cube(a){
    int cube1;

cube1=pow(a,3);
return cube1;
}
