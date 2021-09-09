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
bool is_prime[100005];
void prime(){
for(ll i=0;i<=100000;i++){
  is_prime[i]=true;
}
is_prime[1]=false;
for (ll i = 2; i <= 100000; i++) {
    if (is_prime[i] && (i * i) <= 100000) {
        for (ll j = i * i; j <= 100000; j += i)
            is_prime[j] = false;
    }
}
}
int main(){
  __FastIO;
  ll n,d,r,i,l,m,common;
  prime();
  while(cin>>n){
    for(i=1;i<=1000;i++){
      ll value=(i*n)+1;
      if(!is_prime[value]){
        cout<<i<<endl;
        //return 0;
        break;
      }
    }
  }
  return 0;
}
