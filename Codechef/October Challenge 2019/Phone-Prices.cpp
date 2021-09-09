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
  cin>>testCase;
  while(testCase--){
    cin>>N;
    for(ll i=0;i<N;i++){
      ll x;
      cin>>x;
      V.push_back(x);
    }
    ll dayCount=1;
    for(ll i=1;i<N;i++){
      ll cnt=0;
      bool flag=false;
      for(ll j=i-1;(j>=0);j--){
        if(V[i]>=V[j]){
          flag=true;
        }
        cnt++;
        if((i>=5)&&(cnt==5)){
          break;
        }
      }
      cout<<" Cnt "<<cnt<<" ";
      if(!flag){
        dayCount++;
      }
    }
    cout<<dayCount<<endl;
    V.clear();
  }
  return 0;
}
