/*
    Author:Jaminur Rashid
    Date:25.09.2018
    Problem Type:Greedy
*/
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
int main(){
  __FastIO;
  ll n,d,r,i,a,b,x;
  ll arr[100008];
  while(cin>>n>>x){
  /*  ll ans=0;
    map<ll,ll>mp;
    for(i=0;i<n;i++){
      cin>>r;
      mp[r]++;
      if(r==n||r>n){
        ans-=r;
      }
      else if(r==n-1){
        continue;
      }
      else{
        ans=ans+(n-r);
      }
    }
    if(mp[n-1]==1){
      ans=ans+(n-(n-1));
    }
    cout<<ans<<endl;
    */
    r=(x/n);
    if((r*n)<x){
      r++;
      cout<<r<<endl;
    }
    else{
      cout<<r<<endl;
    }
  }
  return 0;
}
