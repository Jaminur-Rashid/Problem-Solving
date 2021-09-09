#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
      }
    return gcd(b, a % b);
  }
int main(){
  ll n,i,m,j,k,arr[100006];
  while(cin>>n){
    ll sum=0,sum1=0,sum2=0;
    for(i=0;i<n;i++){
      ll x,y;
      cin>>arr[i];
      sum+=arr[i];
    }
    for(i=0;i<n-1;i++){
      ll x;
      cin>>x;
      sum1+=x;
    }
    for(i=0;i<n-2;i++){
      ll y;
      cin>>y;
      sum2+=y;
    }
    cout<<(sum-sum1)<<endl<<(sum1-sum2)<<endl;
  }
  return 0;
}
