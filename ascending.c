#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j,a[10],temp;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


            }
        }
    }
    printf("enter the element in ascending order\n" );
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
return 0;
}
