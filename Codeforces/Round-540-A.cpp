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
vector<ll> is_prime(10005, true);

bool check(char str){
  int i;
  if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common,q,a,b;
  string str,s1;
  cin>>q;
  while(q--){
    cin>>n>>a>>b;
    r=2*a;
    d=min(r,b);
    if((d==b)&&(n%2==0)){
      cout<<(n/2)*b<<endl;
    }
    else if((d==b)&&(n%2!=0)){
      cout<<(((n/2)*b)+a)<<endl;
    }
    else{
      cout<<(a*n)<<endl;
    }
  }
  return 0;
}
