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
//ll arr[100005],brr[100005];
struct P
{
  ll pos,val;
};


int main(){
  ll N,M,A,B,C,D,testCase,K;
  ll arr[1005],brr[100005];
  map<ll,ll>mp;
  ll Arr[106];
  vector<ll>rem;
  vector< pair<ll,ll> >Pair;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N;
    for(ll i=0;i<N;i++)
    {
      cin>>arr[i];
      mp[arr[i]]++;
    }
    sort(arr,arr+N);
    ll mx=0;
    for(ll i=0;i<N;i++)
    {
      ll tmp=mp[arr[i]];
    //  cout<<"Temp b:"<<tmp<<" ";
      ll j=i+1;
      while(tmp<arr[i]&&j<N)
      {
        if(arr[j]!=arr[i])
        {
          tmp=tmp+(mp[arr[j]]);
          j++;
        }
        else
        {
          j++;
        }
      }
    //  cout<<"Temp a:"<<tmp<<" ";
      if(tmp>=arr[i])
      {
        A=arr[i];
      //  cout<<"#"<<endl;
      }
      else
      {
        A=mp[arr[i]];
      }
      mx=max(mx,A);
    //  cout<<"Max b:"<<mx<<" "<<endl;
    }
    cout<<mx<<endl;
    mp.clear();
  }
  return 0;
}
