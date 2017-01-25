#include<stdio.h>
#include<conio.h>
int fact(int a);
int main(){
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
     b=fact(a);
    printf("the factorial of %d =%d",a,b);
    return 0;
}
int fact(int a)
{
    if(a==1||a==0)
        return 1;
    else
        return a*fact(a-1);
}


