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
ll GetNumberOfDigits (ll i)
{
    return i > 0 ?(int) log10 ((double) i) + 1 : 1;
}
void solve(ll a,ll b,ll x)
{
  ll low=0,high=1000000000,ans;
  vector<ll>V;
  //int mid=(low+high)/2;
  while((high-low)>1)
  {
    ll mid=(low+high)/2;
    ans=(a*mid)+(b*GetNumberOfDigits(mid));
    if(ans>x)
    {
      high=mid-1;

    }
    else
    {
      low=mid+1;

    }
    V.push_back(mid);
  }
  sort(V.begin(),V.end());
  for(int i=0;i<V.size();i++)
  {
    if(V[i]<=x)
    {
      ans=V[i];
    }
    else
    {
      break;
    }
  }
  cout<<ans<<endl;
}
int main(){
  ll N,M,A,B,C,D,testCase,K,val,X;
  ll arr[1005],brr[100005];
  map<ll,ll>mp;
  vector<ll>v,v1;
  vector< pair<ll,ll> >Pair;
  string str;
  while(cin>>A>>B>>X)

  {
    solve(A,B,X);
  }
  return 0;
}
