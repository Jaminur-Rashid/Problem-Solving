/*
Author:Jaminur Rashid
Date  :24/2/2019
*/
#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<queue>
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
vector< pair <ll,ll> > pos,pos1;

bool check(char str){
  int i;
  if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common,q,a,b;
  string str,s1;
  while(cin>>n){
    ll ar[100005];
    for(i=0;i<n;i++){
      cin>>ar[i];
    }
    map<ll,ll>mp;
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        ll sum=ar[i]+ar[j];
        mp[sum]++;
      }
    }
    ll mx=1;
    for(i=0;i<mp.size();i++){
      mx=max(mx,mp[i]);
    }
    cout<<mx<<endl;
    mp.clear();
  }
  return 0;
}
