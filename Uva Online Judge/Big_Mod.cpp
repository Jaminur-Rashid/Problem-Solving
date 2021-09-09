#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long int ll;
ll bigMod(ll b,ll p,ll m){
  if(p==0){
    return 1;
  }
  if(p%2==0){
    ll part=bigMod(b,p/2,m);
    return((part%m)*(part%m))%(m);
  }
  else if(p%2==1){
    ll half=b%m;
    ll half1=bigMod(b,p-1,m);
    return((half%m)*(half1%m))%(m);

  }
}

int main(){
  ll b,p,m;
  while(scanf("%lld %lld %lld",&b,&p,&m)==3){
  ll ans=bigMod(b,p,m);
  cout<<ans<<endl;
  }
}
