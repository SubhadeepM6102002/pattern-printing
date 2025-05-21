#include<stdio.h>
int main()
{
    int row,space,star,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<row;space++)
        printf(" ");
        for(star=1;star<=n;star++)
        printf("*");
        printf("\n");
    }
}