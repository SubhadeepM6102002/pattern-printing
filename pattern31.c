#include<stdo.h>
int main()
{
    int row, space, col, n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        printf(" ");
    }
}