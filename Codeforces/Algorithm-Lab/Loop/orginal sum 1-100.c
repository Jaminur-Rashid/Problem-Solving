#include <stdio.h>
void main()
{
    int x,sum=0;
    for(x=5;x<=100;x=x+5){
    sum=sum+x;
    printf("\n\t%d",x);}
    printf("\nThe sum is %d.",sum);
    getchar();
}
