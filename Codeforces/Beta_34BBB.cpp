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

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
      }
    return gcd(b, a % b);
  }
int main(){
  ll n,i,m,j,k,arr[105];
  while(cin>>n>>m){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    ll total=0;
    for(i=0;i<n;i++){
      if(arr[i]<0){
        total+=abs(arr[i]);
      }
      if(i==m-1){
        break;
      }
    }
    cout<<total<<endl;
  }
  return 0;
}
