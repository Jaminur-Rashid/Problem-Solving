
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
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)struct cmp

struct cmp{
bool operator()(const ll& l, const ll& r){
    return l>r;
}
};

int main(){
  ll n,k,i,x,sum=0;
  while(cin>>n>>k){
    priority_queue<ll,vector<ll>, cmp> pq;
    ll arr[100005];
    for(i=0;i<n;i++){
      cin>>x;
      pq.push(x);
      sum+=x;
    }
    ll cnt=1;
    while((!pq.empty())&&(cnt<=k)){
      cout<<pq.top()<<endl;
      sum+=pq.top();
      pq.pop();
    }
    cnt++;
  }
  return 0;
}
