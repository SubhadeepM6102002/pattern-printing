#include<stdio.h>
int main()
{
    int row,space,col,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<row;space++)
        printf(" ");
        for(col=1;col<=n;col++)
        {
            if(row==1||row==n||col==1||col==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}