#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float p,t,r,A,CI;
    printf("Enter the value of principle:\n");
    scanf("%f",&p);
    printf("Enter the value of time:\n");
    scanf("%f",&t);
    printf("Enter the value of rate:\n");
    scanf("%f",&r);
    A=(1+r/100);
    CI=(p*(pow(A,t))-1);
    printf("compound interest :%f\n",CI);
    getch();
    return 0;
}




