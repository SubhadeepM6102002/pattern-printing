#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for( row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++ )
        {
            if((row+col)%2==0)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }

}