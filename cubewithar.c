#include<stdio.h>
#include<conio.h>
#include<math.h>
void cube(a);
int main()
{
    int a;
    printf("enter the number\n");

    scanf("%d",&a);
cube(a);

return 0;
}
void cube(a){
    int cube;

cube=pow(a,3);
printf("cube is %d",cube);
}
