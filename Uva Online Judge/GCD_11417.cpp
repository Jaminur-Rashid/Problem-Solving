#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int GCD(int n,int m){
    if(m==0){
      return n;
    }
    else{
      return(GCD(m,n%m));
    }
}

int main(){
  int n,G,i,j,ans;
  while(scanf("%d",&n)==1){
    if(n==0){
      break;
    }
    G=0;
    for(i=1;i<n;i++){
      for(j=i+1;j<=n;j++){
        ans=GCD(i,j);
        G+=ans;
      }
    }
    printf("%d\n",G);
  }
  return 0;
}
