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
  map<ll,ll>mp;
  vector<ll>v,v1;
  vector< pair<ll,ll> >Pair;
  cin>>testCase;
  while(testCase--)
  {
    ll cnt=0;
    cin>>N;
    for(ll i=0;i<N;i++)
    {
      ll x;
      cin>>x;
      v.pb(x);
    }
    for(ll i=0;i<N;i++)
    {
      ll x;
      cin>>x;
      v1.pb(x);
      if(v[i]!=v1[i])
      {
        cnt++;
      }
    }
    bool flag=false,chk=false;
    ll dif=0,k=0;
    for(ll i=0;i<N;i++)
    {
      if((v[i]!=v1[i])&&(!flag))
      {
        dif=abs(v[i]-v1[i]);
        flag=true;
      }
      if((flag)&&(cnt))
      {
        cnt--;
        ll tmp=(v[i]+dif);
        if(tmp!=v1[i])
        {
          chk=true;
          //cout<<"dif "<<dif<< " "<<i<<endl;
          break;
        }
      }
    }
    if(!chk)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
    v.clear();
    v1.clear();
  }
  return 0;
}
