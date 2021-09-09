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
  ll n,i,j,thomas,sum;
  vector<ll>v;
  while(cin>>n){
    for(i=0;i<n;i++){
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      sum=a+b+c+d;
      if(i==0){
        thomas=(sum);
      }
      v.push_back(sum);
    }
    ll cnt=1;
    for(i=0;i<v.size();i++){
      if(v[i]>thomas){
        cnt++;
      }
    }
    cout<<cnt<<endl;
    v.clear();
  }
  return 0;
}
