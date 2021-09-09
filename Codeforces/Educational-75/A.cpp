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
int main()
{
  ll N,M,A,B,C,D,testCase,K;
  cin>>testCase;
  string str;
  while(testCase--)
  {
    cin>>str;
    cout<<str<<endl;
    ll x=0;
    map<char,ll>mp;
    for(ll i=0;i<str.size();i++)
    {
      char ch=str[i];
      ll j=i+1;
      x=1;
      while(str[j]!=str[i])
      {
        i++;
        j++;
        x++;
        cout<<i<<" "<<j<<" "<<x;
      }
      if(x==1)
      {
        mp[ch]=x;
      }
      else if(x%2==1)
      {
        mp[ch]=x;
      }
    }
    map<char,bool>chk;
    for(ll i=0;i<str.size();i++)
    {
      if(((mp[str[i]]%2)|| (mp[str[i]]==1))&&(!chk[str[i]]))
      {
        cout<<str[i]<<endl;
        chk[str[i]]=true;
      }
    }
    mp.clear();
    chk.clear();
  }
  return 0;
}
