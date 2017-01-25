#include<stdio.h>
#include<conio.h>
int fib(int i);
int main(){
    int i;
    for(i=0;i<15;i++){
        printf("%d\t",fib(i));

    }
    return 0;
}
int fib(int i){
if(i==0)
    return 0;
    if(i==1)
        return 1;
    return fib(i-1)+fib(i-2);

}
