#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=5;j>i;j--)
        {
        printf("*");
        printf(" ");
        }
    printf("\n");
    }
    return 0;

}
