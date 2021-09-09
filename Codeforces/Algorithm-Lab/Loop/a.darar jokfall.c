#include<stdio.h>
int main()
{
    float i,n,t,f,g,sum=0;
    printf(" 1+1/2+1/3+....+1/n");
    printf("\n the number is\n :");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
    t=1/i;
    sum=sum+t;
    }
    printf("%f",sum);
    return 0;

}
