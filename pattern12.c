#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n+1;col++)
        {
            if(row==1 || row==n || col==1 || col==n+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}