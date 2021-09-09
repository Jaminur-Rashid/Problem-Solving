#include <stdio.h>
void main()
{
    int x,n,sum=0,j,i,e,s;
    printf(" \n\t Enter 1)decimal to binary Enter 2) binary decimal is:");
    scanf("%d",&s);
    if(s==1)
    {
    printf(" the number is :");
    scanf("%d",&n);
    for(i=1;n!=0;i=i*10){
    x=n%2;
    sum=sum+x*i;
    n=n/2;}
    printf(" \n\t the binary number is: %d\n\n",sum);
    getchar();
    }
    if(s==2)    {
        printf(" the number is :");
        scanf("%d",&n);

    for(i=1;n!=0;i=i*2)
        {
         x=n%10;
         sum=sum+i*x;
          n=n/10;
    }
    printf(" the decimal number is: %d",sum);
    getchar();
    }
    getchar();

}
