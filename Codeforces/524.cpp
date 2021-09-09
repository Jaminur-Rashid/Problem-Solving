#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
vector<ll> is_prime(10005, true);
void prime(){
//vector<ll> is_prime(10005, true);
for (ll i = 2; i <= 10005; i++) {
    if (is_prime[i] && (i * i) <= 10005) {
        for (ll j = i * i; j <= 10005; j += i)
            is_prime[j] = false;
    }
}
}
int main(){
  __FastIO;
  ll n,d,r,i,l,m,common;
  string s,s1;
  prime();
  while(cin>>n){
    for(l=1;l<=10000;l++){
      if(is_prime[l]){
        cout<<l<<" ";
      }
    }
    for(i=1;i<n;i++){
      ll value=(i*n)+1;
      if(is_prime[value]){
        cout<<i<<endl;
      //  return 0;
      }
    }
    }
/*  __FastIO;
  ll n,d,i,m;
  while(cin>>n){
    if(n==1){
      cout<<"-1"<<endl;
    }
    else{
      cout<<n<<" "<<n<<endl;
    }
  }
  */
  return 0;
}
