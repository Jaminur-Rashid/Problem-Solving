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
ll arr[100005],br[100005];

ll findRem(string str,ll N){
  ll res=0;
  for(int i=0;i<str.length();i++){
    res = (res*10 + (int)str[i] -'0') %N;
  }
  return(res);
}

int main(){
  ll T,N,i,x;
  string K;
  cin>>T;
  while(T--){
    cin>>N;
    cin>>K;
    ll rem=findRem(K,N);
    //cout<<130%12<<endl;
    //cout<<rem<<endl;
    vector<ll>v;
    map<ll,ll>mp;
    ll Zero=N-rem;
    for(i=0;i<(rem+Zero);i++){
      if(i>=rem){
        v.push_back(0);
        mp[0]++;
      }
      else{
      v.push_back(1);
      mp[1]++;
    }
    }
    for(i=0;i<v.size();i++){
      if((i==0&&mp[1]>0)||(i%2==0&&mp[1]>0)){
        v[i]=1;
        mp[1]--;
      }
      else{
        v[i]=0;
        mp[0]--;
      }
    }
    ll sum=0;
    for(i=0;i<v.size()-1;i++){
      sum+=(abs(v[i]-v[i+1]));
    //cout<<v[i]<<" ";
    }
    //cout<<endl;
    cout<<sum<<endl;
    v.clear();
    mp.clear();
  }
  return 0;
}
