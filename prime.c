#include<stdio.h>
#include<conio.h>
void prime();
int main(){
    prime();


    return 0;
}
void prime(){
    int i,n;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {


        printf("it is not prime\n");
        break;
    }
    }
    if(i==n)
    {
        printf("it is prime\n");
    }
    return 0;
    }
