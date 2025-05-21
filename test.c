#include<stdio.h>
int main()
{
    int n,row,space,star;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n+(n-row);space++)
        printf(" ");
        for(star=1;star<=2*row-1;star++)
        printf("*");
        printf("\n");
    }
    n=star-1;
    for(row=1;row<=n;row++)
    {
      for(space=1;space<row;space++)
      printf(" ");
      for(star=1;star<=2*(n-(row-1))+1;star++)
      printf("*");
      printf("\n");
    }

}