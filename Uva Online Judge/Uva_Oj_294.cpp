#include <bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
  long long int i,j,couunt,n,low,high,ans,number,Max;
  scanf("%lld",&n);
  while(n--){
    scanf("%lld %lld",&low,&high);
    Max=0;
    for(i=low;i<=high;i++){
      couunt=0;
        for(j=1;j<=sqrt(i);j++){
        if(i%j==0){
          if((i/j)!=j){
            couunt+=2;
          }
          else{
            couunt++;
          }
        }
      }
      if(couunt>Max){
        Max=couunt;
        number=i;
      }
    }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,high,number,Max);
  }
  return 0;
}
