#include<stdio.h>
int main()
{
    int row,col,n,var=65;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",var);
            var++;
        }
        
        printf("\n");
    }
}