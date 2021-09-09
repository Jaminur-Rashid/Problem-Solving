#include<bits/stdc++.h>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll arr[1000007];

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
map<ll,ll>mp;
map<ll,bool>mp1;
//vector<ll>v;

int main(){
  ll n,m,ans,x,y,a,b,i;
  vector<ll>v;
  //map<ll,bool>mp;
  cin>>n;
    for(i=0;i<n;i++){
      cin>>x>>y;
      mp[x]=y;
      mp1[x]=true;
    }
    cin>>m;
    for(i=0;i<m;i++){
      cin>>a>>b;
      ll t=a;
      if(mp1[a]){
        if(b>mp[t]){
          mp[a]=b;
        }
      }
      else{
      mp[a]=b;
     }
    }
    unsigned long long sum=0;
    map<ll,ll>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
      sum+=it->second;
    }
    cout<<sum<<endl;
    mp.clear();
    mp1.clear();
    return 0;
}
