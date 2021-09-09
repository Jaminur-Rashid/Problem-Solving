#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long int ll;
ll n;
int func(long long int n){
  if(n>=101){
      return (n-10);
}
else{
  return func(func(n+11));
}
}
int main(){
  ll ans;
  while(scanf("%lld",&n)==1){
      if(n==0){
        break;
      }
  ans=func(n);
  cout<<"f91("<<n<<") = "<<ans<<endl;
  }
}
