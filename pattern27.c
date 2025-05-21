#include<stdio.h>
int main()
{
    int row,col,space,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        printf(" ");
        for(col=1;col<=2*row-1;col++)
        {
            if(row==1|| col==1|| col==2*row-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(row=1;row<=n;row++)
    {
        for(space=1;space<row;space++)
        printf(" ");
        for(col=1;col<=2*(n-row)+1;col++)
        {
            if(row==n || col==1 || col==2*(n-row)+1 )
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}