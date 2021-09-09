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
struct S
{
  ll pos,val;
};
int main(){
  ll N,M,A,B,C,D,testCase,K;
  map<ll,ll>mp;
  vector<ll>V,ase;
  string str;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N;
    queue<ll>q;
    S arr[105];
    for(ll i=0;i<N;i++)
    {
      ll x;
      cin>>x;
      arr[i].val=x;
      arr[i].pos=i;
    }
    ll cnt=0;
    map<ll,bool>mp;
    for(ll i=0;i<N;i++)
    {
      if(!mp[arr[i].pos])
          cnt++;
      for(ll j=i+1;j<N;j++)
      {
        if(abs((arr[j].val-arr[i].val)<=1)&&(!arr[j].pos))
        {
          continue;
        }
        else
        {
          mp[arr[j].pos]=true;
        }
      }
    }
    cout<<cnt<<endl;
    mp.clear();
  }
  return 0;
}
