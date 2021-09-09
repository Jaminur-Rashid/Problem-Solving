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
  while(cin>>N>>K){
    cin>>str;
    for(ll i=0;i<N;i++){
      if((i==0)&&(str[i]=='0')&&(N==1)){
        break;
      }
      else if((i==0)&&(str[i]!=1)&&(K>=1)&&(N>1)){
        str[i]='1';
        K--;
      }
    }
    cout<<str<<endl;
  }
  return 0;
}
