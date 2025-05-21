#include<stdio.h>
int main()
{
    int row, col,space,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1||row==n || col==1||col==n)
            printf("3");
            else if(row==2||row==n-1||col==2||col==n-1)
            printf("2");
            else
            printf("1");
        }
        printf("\n");
    }
}