#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll a,b,x,y,z,Y,B,ans,ye,bl;
  while(cin>>a>>b){
    cin>>x>>y>>z;
    Y=x*2+y;
    B=y+z*3;
    ll ans=0;
   if(Y>a){
    ans=Y-a;
   }
   if(B>b){
    ans=ans+B-b;
   }
   cout<<ans<<endl;
  }
  return 0;
}
