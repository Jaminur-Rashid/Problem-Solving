#include <stdio.h>
void main()
{
    int a,n,d,f,x,v,sum=0;
    printf("\n\t enter 1)binary to dicimal number 2)dicimal to binary is:");
    scanf("%d",&x);
    if(x==1)
    {
    printf("\n\tthe binary number is:");
    scanf("%d",&n);
    for(a=1;n!=0;a=a*2)
    {
    f=n%10;
    sum=sum+a*f;
    n=n/10;
    }
    printf("\n\t the decimal number is %d\n\n\n\n\n",sum);

    }
    else
    {
    printf("\n\tthe decimal number is:");
    scanf("%d",&n);
    for(a=1;n!=0;a=a*10)
    {
    f=n%2;
    sum=sum+a*f;
    n=n/2;
    }
    printf("\n\t the binary number is %d\n\n\n\n\n",sum);
    }
}
