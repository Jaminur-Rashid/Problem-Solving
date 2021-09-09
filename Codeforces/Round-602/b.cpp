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
  map<ll,bool>mp;
  vector<ll>rem,ans;
  vector< pair<ll,ll> >Pair;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N;
    for(int i=0;i<N;i++)
    {
      cin>>arr[i];
      mp[arr[i]]=true;
    }
    for(int i=N-1;i>0;i--)
    {
      if(mp[i+1]==false)
      {
        rem.push_back(i+1);
      }
    }
    for(int i=0;i<rem.size();i++)
    {
      cout<<rem[i]<<endl;
    }
    sort(rem.begin(),rem.end());
    ll tilMax=arr[0],cnt=0,i;
    bool chk=false;
    for(i=1;i<N;i++)
    {
      if(arr[i]>tilMax)
      {
        tilMax=arr[i];
        cout<<"tilMax "<<tilMax<<endl;
      }
      else if(arr[i]==tilMax)
      {
        cnt++;
        bool flag=false;
        for(int j=0;j<rem.size();j++)
        {
          if((!mp[rem[j]])and(tilMax>rem[j]))
          {
            arr[i]=rem[j];
            mp[rem[j]]=true;
            flag=true;
            cout<<"Yes "<<endl;
          }
        }
        if(!flag)
        {
          chk=true;
          break;
        }
      }
    }
    cout<<"cnt "<<cnt<<" i "<<i<<endl;
    if(chk)
    {
      cout<<"-1"<<endl;
    }
    else
    {
      for(int i=0;i<N;i++)
      {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    rem.clear();
    mp.clear();
  }
  return 0;
}
