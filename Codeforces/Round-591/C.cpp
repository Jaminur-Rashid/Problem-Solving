#include<bits/stdc++.h>
#include<set>
#include<queue>
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
ll arr[100005],brr[100005];

ll gcd(ll a, ll b){
	if (a == 0){
		return b;
  }
	return gcd(b % a, a);
}
ll findGCD(vector<ll>arr, ll n){
	ll result = arr[0];
	for (ll i = 1; i < n; i++){
		result = gcd(arr[i], result);
  }
	return result;
}
int main(){
  ll N,M,A,B,C,D,testCase,K;
  map<ll,ll>mp;
  vector<ll>V,ase;
  string str;
  cout<<15/(100*1.00)<<endl;
  cin>>testCase;
  ll prices[200005];
  while(testCase--){
    cin>>N;
    for(ll i=0;i<N;i++){
      ll x;
      cin>>prices[i];
    }
    ll X,A,Y,B;
    cin>>X>>A;
    cin>>Y>>B;
    cin>>K;
    sort(prices,prices+N);
    ll most=A*B;
    ll modPrices[200005];
    if(most<=N){
    for(ll i=most;i<N;i+=most){
      //modPrices[i]=
    }
  }
  }
  return 0;
}
