    #include<stdio.h>
int main()
{
    int row,col,star,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        printf(" ");
        for(star=1;star<=row;star++)
        {
        printf("*");
        }
     printf("\n");
    }
}