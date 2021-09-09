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
  int len,i,n,p,m;
  string str;
  vector<int>v;
  vector<int>v1;
  map<int,bool>mp;
  while(cin>>n>>m){
    if(n==0||m==0){
      break;
    }
    for(i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
    }
    for(i=0;i<m;i++){
      int x;
      cin>>x;
      mp[x]=true;
      //v1.push_back(x);
    }
    for(i=0;i<v.size();i++){
      if(mp[v[i]]){
        cout<<v[i]<<' ';
      }
    }
    cout<<endl;
    mp.clear();
    v.clear();
  }
  return 0;
}
