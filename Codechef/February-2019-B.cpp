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
  ///  #00001a Content Colour
  __FastIO;
  ll n,d,r,i,l,j,m,common,T;
  string str,s1;
  cin>>T;
  while(T--){
    map<char,ll>mp;
    set<char>S;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>str;
      ll len=str.size();
      for(j=0;j<len;j++){
        S.insert(str[j]);
      }
      set<char>::iterator itr;
     for (itr= S.begin();itr!=S.end();++itr){
        //cout<<*itr<<" ";
        mp[*itr]++;
        //cout<<mp[*itr]<<" ";
      }
      S.clear();
    }
    ll cnt=0;
    for(i=0;i<mp.size();i++){
      if((mp[i]==n)){
        cnt++;
      }
    }
    cout<<cnt<<endl;
    mp.clear();
  }
  return 0;
}
