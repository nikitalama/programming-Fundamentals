#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    float arr[50];
    printf("enter total number of element(1 to 50)");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;++i)
        {
            printf("enter number %d:",i+1);
            scanf("%f",&arr[i]);
    }
    for(i=1;i<n;++i){
            if (arr[0]<arr[i])
            arr[0]=arr[i];

    }
    printf("maximum number= %.2f",arr[0]);
    getch();
    return 0;
    }
