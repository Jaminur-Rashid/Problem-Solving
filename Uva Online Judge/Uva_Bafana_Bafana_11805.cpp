#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int n,i,t,position,pass,ans,sum;
  scanf("%d",&t);
  for(i=1;i<=t;i++){
    scanf("%d %d %d",&n,&position,&pass);
    sum=position+pass;
    if(sum<=n){
      ans=sum;
    }
    else{
      if(sum%n==0){
        ans=n;
      }
      else{
      ans=(sum%n);
    }
    }
    printf("Case %d: %d\n",i,ans);
  }
  return 0;
}
