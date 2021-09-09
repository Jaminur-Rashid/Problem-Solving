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
void prime(){
//vector<ll> is_prime(10005, true);
for (ll i = 2; i <= 10005; i++) {
    if (is_prime[i] && (i * i) <= 10005) {
        for (ll j = i * i; j <= 10005; j += i)
            is_prime[j] = false;
    }
}
}
int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common;
  string str,s1;
  //string arr[505];
  ll arr[300005];
  while(cin>>n){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    i=0;j=n-1;
    ll sum=0;
    while(i<j){
      ll x=arr[i]+arr[j];
      sum+=(x*x);
      i++;
      j--;
    }
    cout<<sum<<endl;
/*
Problem A:
  while(cin>>n){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    ll cnt=0;
    for(i=1;i<n;i++){
      for(j=1;j<n;j++){
        if((arr[i][j]=='X')&&(arr[i-1][j-1]=='X')&&(arr[i+1][j-1]=='X')&&(arr[i-1][j+1]=='X')&&(arr[i+1][j+1]=='X')){
          cnt++;
        }
      }
    }
    cout<<cnt<<endl;
    */
  }
  return 0;
}
