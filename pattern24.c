#include<stdio.h>
int main()
{
    int row,space,star,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(star=1;star<=n-row;star++)
        printf("*");
        for(space=1;space<=2*(row-1);space++)
             printf(" ");
        
             for(star=1;star<=n-row;star++)
             printf("*");
        printf("\n");
    }
}