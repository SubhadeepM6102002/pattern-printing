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
        for(col=1;col<=n;col++)
        {
        if(col==1||col==n||row==1||row==n)
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }
}