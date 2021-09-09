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
struct S{
  ll pos;
  ll val;
};
bool cmp(S a , S b){
  return(a.val<b.val);
}
int main(){
  ll N,M,A,B,C,D,i,testCase,K;
  vector<ll>V,ans;
  S value[10005];
  string str;
  while(cin>>N){
    for(ll i=0;i<N;i++){
      ll x;
      cin>>x;
      value[i].val=x;
      value[i].pos=i+1;
    }
   sort(value,value+N,cmp);
   ll shot=0;
   ll cnt=0;
   for(ll i=N-1;i>=0;i--){
     shot+=(value[i].val*cnt)+1;
     cnt++;
     ans.push_back(value[i].pos);
   }
   cout<<shot<<endl;
   for(ll i=0;i<N;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;

  }
  return 0;
}
