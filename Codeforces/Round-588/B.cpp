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
ll V[5],brr[100005];

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
  int N,M,i,testCase,K;
	vector<ll>V;
	//cin>>testCase;
	deque<int>dq;
	map<int,int>mp;
  while(cin>>N>>K){
		//cin>>N;
		ll sum=0;
		deque<int>::iterator it;
		deque<int>::iterator it1;
		for(int i=0;i<N;i++){
        ll x;
				cin>>x;
				if(i==0){
					dq.push_front(x);
					mp[x]=1;
				}
				if((mp.count(x)==0) && (i>0)){
					mp[x]=1;
					it=dq.begin()+(K-1);
					if(dq.size()>=K){
					mp[dq[K-1]]=0;
					dq.erase(it);
					dq.push_front(x);
				 }
				 else{
					 dq.push_front(x);
					 mp[x]=1;
				 }
				}
				//dq.push_back(x);
		}
	  cout<<dq.size()<<endl;
		//it=dq.begin()+(K-1);
		//dq.erase(it);
		for(it=dq.begin();it!=dq.end();++it){
			cout<<*it<<" ";
		}
		cout<<endl;
		dq.clear();
		mp.clear();
	}
  return 0;
}
