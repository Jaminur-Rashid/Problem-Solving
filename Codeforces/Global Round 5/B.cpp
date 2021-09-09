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
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
int main()
{
  ll N,M,K,A,testCase,B,C,D;
  cin>>testCase;
  while(cin>>N)
  {
  vector< pair <ll,ll> > V;
    for(ll i=0;i<N;i++)
    {
      ll x;
      cin>>x;
      V.pb(make_pair(i+1,x));
    }
    sort(V.begin(),V.end(),sortbysec);
    if(V[0].first>=V[N-1].first)
    {
      cout<<V[N-1].second<<" "<<V[0].second<<endl;
    }
    else
    {
      cout<<V[0].second<<" "<<V[N-1].second<<endl;
    }
    V.clear();
  }

  return 0;

}
