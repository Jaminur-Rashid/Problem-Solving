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
  ll n,d,i,m;
  while(cin>>n){
    bool flag=false;
    ll l=1,r=n;
    while(l<=r){
      m=r/l;
       if((m==0)&&(m<n)){
        if((l*r)>n){
          cout<<r<<" "<<l<<endl;
          flag=true;
          break;
        }
      }
      l++,r--;
    }
    if(!flag){
      cout<<"-1"<<endl;
    }
  }
  return 0;
}
