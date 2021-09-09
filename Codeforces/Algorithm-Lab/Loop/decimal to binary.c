#include <stdio.h>
void main()
{
    int x,n,sum=0,i;
    printf(" \n\tthe number is:");
    scanf("%d",&n);
    for(i=1;n!=0;i=i*10){
    x=n%2;
    sum=sum+x*i;
    n=n/2;}
    printf(" \n\t the binary number is: %d\n\n",sum);
    getchar();

}
