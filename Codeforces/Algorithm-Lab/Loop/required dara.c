#include <stdio.h>
void main()
{
    int x,sum=0,diff,star,end;
    scanf("%d%d%d",&diff,&star,&end);
    for(x=star;x<=end;x=x+diff){
    sum=sum+x;}
    printf("sum is %d\n",sum);
}
