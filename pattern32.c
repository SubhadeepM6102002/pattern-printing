#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==1 || col==n)
            printf("2");
            else
            printf("1");
        }
        printf("\n");
    }
}