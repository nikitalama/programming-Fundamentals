#include<stdio.h>
#include<conio.h>
void main(){
int a[6],sum=0,i;
    for(i=0;i<=5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("%d",sum);
    getch();
    return 0;
}
