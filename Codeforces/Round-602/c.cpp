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
int main(){
  ll N,M,A,B,C,D,testCase,K,val,X;
  ll arr[1005],brr[100005];
  map<ll,ll>mp;
  vector<ll>v,v1;
  vector< pair<ll,ll> >Pair;
  string str;
  while(testCase--)
  {
    cin>>N;
    for(int i=0;i<N;i++)
    {
      ll x;
      cin>>x;
      v.push_back(x);
    }
    vector<string>str;
    string ans="";
    ll cnt;
    for(int i=0;i<N-1;i+=cnt)
    {
      cnt=1;
      int x=i;
      for(int j=i+1;j<N;j++)
      {
        if(v[j]-1==v[x])
        {
          x++;
          cnt++;
        }
      }
      if(cnt>=3)
      {
        cout<<v[i]<<"..."<<v[i]+cnt-1<<",";
      }
      else
      {
        for(int k=i;k<cnt;k++)
        {
          cout<<v[k]<<",";
        }
      }
    }
    cout<<endl;
  }
  return 0;
}
