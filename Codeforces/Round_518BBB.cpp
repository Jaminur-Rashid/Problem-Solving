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

ll solve(ll a){
  ll cnt=0;
  for(ll i=1;i<=sqrt(a);i++){
    if((a%i==0)){
      if(a/i!=i){
        cnt+=2;
      }
      else{
        cnt++;
      }
    }
  }
  return cnt;
  }
int main(){
  ll n,x,i,y;
  while(cin>>n){
    if(n==1){
      cout<<"1"<<endl;
    }
    else{
      cout<<solve(n)<<endl;
    }
  }
  return 0;
}
