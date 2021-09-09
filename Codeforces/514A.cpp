#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long  ll;
bool primee[1000006];

bool checkPrime(ll x){
  ll i,j,sq;
  sq=sqrt(x);
  for(i=2;i<=sq;i++){
    if(x%i==0){
      return false;
    }
  }
  return true;
}


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y;
    cin>>x>>y;
    ll tmp=x+y;
    if((x-y==1)&&(checkPrime(tmp))){
      cout<<"YES"<<endl;
    }
      else{
        cout<<"NO"<<endl;
      }
  }
}
