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
  string s,t;
  ll i,j,len,len1,n,m;
  //set<ll>s;
  vector<ll>v;
  vector<ll>v1;
  while(cin>>n>>m){
    ll sum=0,cnt=0;
    for(i=0;i<n;i++){
      ll x,y;
      cin>>x>>y;
      ll dif=(x-y);
      v.push_back(dif);
      sum+=x;
      //s.insert(x);
      //s.insert(y);
    }
    bool flag=false;
    if(sum<=m){
      cout<<"0"<<endl;
    }
    else{
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--){

      sum=(sum)-(v[i]);

      //cout<<sum<<" ";
      cnt++;
      if(sum<=m){
        flag=true;
        break;
      }

    }
    if(flag){
     cout<<cnt<<endl;
   }
   else{
     cout<<"-1"<<endl;
   }

  }
     v.clear();
     v1.clear();
   }
}
