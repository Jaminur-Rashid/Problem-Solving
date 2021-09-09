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
  ll n,d,r,i,l,m;
  ll arr[106];
  string str;
  while(cin>>n){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ans=0;
    for(i=0;i<n-1;i+=2){
      ans+=(arr[i+1]-arr[i]);
    }
    cout<<ans<<endl;
  }
  return 0;
}
