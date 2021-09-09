#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll solve(ll a,ll b,ll c,ll d){
    ll cnt=0;
    if(a<b){
      cout<<"-1"<<endl;
    }
    else{
      ll ans=(a/b);
      if((ans+c)>=d){
        cout<<ans<<endl;
      }
      else{
        cout<<"-1"<<endl;
      }
    }
  }

int main(){
  ll n,m,k,l;
  while(cin>>n>>m>>k>>l){
    solve(n,m,k,l);
  }
  return 0;
}
