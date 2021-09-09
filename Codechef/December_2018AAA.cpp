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
  while(cin>>n>>r){
    for(i=0;i<n;i++){
      cin>>d;
      if(d>=r){
        cout<<"Good boi"<<endl;
      }
      else{
        cout<<"Bad boi"<<endl;
      }
    }
  }
  return 0;
}
