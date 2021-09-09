#include<bits/stdc++.h>
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
  ll n,k,i,j,ans;
  ll arr[1000];
  while(cin>>n>>k){
    rep(i,n){
      cin>>arr[i];
    }
    vector<ll>v;
    //sort(arr,arr+n);
    map<ll,bool>mp;
    rep(i,n){
      if(mp[arr[i]]==false){
      v.push_back(i+1);
      mp[arr[i]]=true;
    }
    }
    if(v.size()>=k){
    cout<<"YES"<<endl;
    for(i=0;i<k;i++){
      cout<<v[i]<<' ';
    }
    cout<<endl;
   }
   else{
     cout<<"NO"<<endl;
   }
   mp.clear();
   v.clear();
  }
  return 0;
}
