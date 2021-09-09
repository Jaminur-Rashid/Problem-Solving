#include<bits/stdc++.h>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll arr[1000007];
//ll arr[1000007];

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
int main(){
  int n,i,u,v;
  map<ll,ll>mp;
  string str;
  while(cin>>n){
    vector<int> adj[10000];
    for(i=1;i<=n;i++){
      cin>>u>>v;
      adj[v].push_back(u);
      adj[u].push_back(v);

    }
    int cnt=0;
    for(int j=1;j<=n;j++){
      if(adj[j].size()==1){
        cnt++;
      }
  }
  cout<<cnt<<endl;
}
  /*while(cin>>n){
    ans=n%2;
    cout<<ans<<endl;
  }
  */
  /*while(cin>>n>>m){
    for(i=1;i<=m;i++){
      ll x;
      cin>>x;
      mp[x]++;
    }
    ans=10000;
    for(i=1;i<=n;i++){
      ans=min(ans,mp[i]);
    }
    cout<<ans<<endl;
  }
  */
  /*ll one,zero,n,i;
  string str;
  while(cin>>n){
    cin>>str;
    ll len=str.size();
    zero=0,one=0;
    for(i=0;i<len;i++){
      if(str[i]=='1'){
        one++;
      }
      else{
        zero++;
      }
    }
    if(one==0){
      cout<<"0"<<endl;
    }
    else{
      cout<<"1";
      while(zero--){
        cout<<"0";
      }
      cout<<endl;
    }
   }
   */
}
