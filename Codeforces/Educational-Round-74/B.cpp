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
  cin>>testCase;
  while(testCase--)
  {
    cin>>N>>K;
    ll sum=0;
    for(ll i=0;i<N;i++)
    {
      ll x;
      cin>>x;
      //sum+=x;
      if(x<K)
      {
        sum+=K;
      }
      else
      {
        sum+=x;
      }
      mp[x]++;
    }
    priority_queue<ll>Pq;
    priority_queue<ll>Pq1;
    map<ll,ll>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
      Pq.push(it->second);
      //Pq1.push(it->first);
    }
    ll cnt=0;
    ll i=0;
    while((!Pq.empty())&&(sum>0))
    {
      ll top=Pq.top();
      //cout<<top<<endl;
      sum=sum-(top*mp[top]);
      //cout<<sum<<endl;
      Pq.pop();
      //cout<<Pq.top()<<endl;
      sum=sum-(Pq.size()*K);
      //cout<<sum<<endl;
      cnt++;
    }
    cout<<cnt<<endl;
    mp.clear();
  }
  return 0;
}
