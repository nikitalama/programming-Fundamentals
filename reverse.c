#include<stdio.h>
#include<conio.h>
void reverse();
int main(){
    reverse();


    return 0;
}
void reverse(){
    int i,rem,sum=0,temp;
    printf("enter the number\n");
    scanf("%d",&i);
    temp=i;
    while(i>0)
    {

    rem=i%10;
    sum=sum*10+rem;
    i=i/10;
    //printf("%d" ,rem);
    }
    printf("%d",sum);
    if(temp==sum){
        printf("it is palindrome");
    }
    else{
        printf("it is not palindrome");
    }
    return 0;
    }


