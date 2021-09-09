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
struct P
{
  ll pos,val;
};


int main(){
  ll N,M,A,B,C,D,testCase,K;
  ll arr[1005],brr[100005];
  map<ll,ll>chk,chk1,chk2;
  vector<ll>v,ans;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
      int x;
      cin>>x;
      v.pb(x);
    }
    ll sum=0;
    bool flag=false;
    for(int i=0;i<N;i++)
    {
      ll tot=sum+v[i];
      if(tot<K)
      {
        sum=0;
        cout<<"NO "<<i+1<<endl;
        flag=true;
        break;
      }
      else
      {
        sum=tot-K;
      }
    }
    if(!flag)
    {
      cout<<"YES"<<endl;
    }
    v.clear();
    ans.clear();
  }
  return 0;
}
