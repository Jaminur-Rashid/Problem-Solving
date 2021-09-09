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
int main()
{
  ll N,M,K,A,testCase,B,C,D;
  cin>>testCase;
  while(testCase--){
    cin>>A>>B>>C>>D>>K;
    ll tmp,tmp1,tmp2,tmp4;
    if((A/C)<1){
      tmp=1;
    }
    else{
      if(A%C==0){
        tmp=A/C;
      }
      else{
        tmp=(A/C)+1;
      }
    }
    if((B/D)<1){
      tmp1=1;
    }
    else{
      if(B%D==0){
        tmp1=B/D;
      }
      else{
        tmp1=(B/D)+1;
      }
    }
    if((tmp+tmp1)>K){
      cout<<"-1"<<endl;
    }
    else{
      cout<<tmp<<" "<<tmp1<<endl;
    }
  }

  return 0;
}
