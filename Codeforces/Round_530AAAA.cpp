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
  ll w,h,d,r,i,l,m;
  string str;
  map<ll,ll>mp;
  while(cin>>w>>h){
    ll u1,d1,u2,d2;
    cin>>u1>>d1;
    cin>>u2>>d2;
    mp[d1]=u1;
    mp[d2]=u2;
    ll W=w,H=h;
    while(H>0){
      W+=H;
      if(mp[H]>0){
        W-=mp[H];
        if(W<0){
          W=0;
        }
      }
      H--;
    }
    cout<<W<<endl;
    mp.clear();

  }
  return 0;
}
