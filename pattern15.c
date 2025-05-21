#include<stdio.h>
int main()
{
    int row,star,n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(star=1;star<=n;star++)
        printf("*");
        printf("\n");
    }
}