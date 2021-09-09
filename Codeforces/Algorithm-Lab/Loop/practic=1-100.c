#include <stdio.h>
void main()
{
    int x,sum=5;
    for(x=0;x<=100;x=x+5){
    sum=sum+x;
    if(x!=0)
    printf("\n\t%d",x);}
    printf("\nThe sum is %d.",sum);
    getchar();
}
