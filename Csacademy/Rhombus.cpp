#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int d1,d2,i,k,s;
  double ans;
  while(cin>>d1>>d2>>k){
    for(i=1;i<=k;i++){
      if(d1>d2){
        d2++;
      }
      else{
        d1++;
      }
  }
  ans=(d1*d2)/(2.0);
  printf("%0.6lf\n",ans);
}
  return 0;
}
