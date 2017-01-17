#include<stdio.h>
#include<conio.h>
int even();
int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if(even(a)==0){
     printf("even is %d",a );
    }
    else
        {
        printf("odd is %d",a);

    }
    return 0;
}
int even(a){
    int n;
    if (a%2==0){
        n=0;
    }
    else
    {


        n=1;
    }
    return n;
}
