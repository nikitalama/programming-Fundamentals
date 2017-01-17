#include<stdio.h>
#include<conio.h>
int minimum();
int main(){
    printf("minimum is %d",minimum());


     return 0;
}
int minimum(){
    int a,b,x;
    printf("enter the two numbers\n");
    scanf("%d %d",&a,&b);
    if(a<b){
            x=a;
    }
    else{
        x=b;
    }
    return x;
}
