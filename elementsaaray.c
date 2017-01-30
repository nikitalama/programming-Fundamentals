#include<stdio.h>
#include<conio.h>
int main(){
    int num,i,a[10];
    for(i=0;i<10;i++){
    printf("enter the size of array\n");
    scanf("%d",&a[i]);
    }
    printf("enter the searching number\n");
    scanf("%d",&num);
    if(num==a[i]){
        printf("it is array");
    }
    else{
        printf("it is not");
    }
return 0;
}






