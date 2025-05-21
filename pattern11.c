#include<stdio.h>
int main()
{
    int row,space,star,n;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<row;space++)
            printf(" ");
        for(star=1;star<=n+1-row;star++)
        printf("*");
        printf("\n");
    }
}