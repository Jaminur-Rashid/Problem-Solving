#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
        printf(" ");
        }
        for(j=n;j>i;j--)
            {
    printf("*");
    printf(" ");
            }
    printf("\n");
    }
}
