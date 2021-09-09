#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
  long long int k,n,m,sum,borrow;
  int i;
  scanf("%lld %lld %lld",&k,&n,&m);
  sum=0;
  for( i=1;i<=m;i++){
    sum=sum+k*i;
  }
  borrow=sum-n;
  if(sum<=n){
    printf("0\n");
  }
  else{
  printf("%lld\n",borrow);
  }
  return 0;
}
