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
  ll N,M,A,B,C,D,testCase,K;
  map<ll,ll>mp;
  ll arr[105];
  //vector<ll>V,ase;
  string str;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N>>K>>D;
    for(ll i=0;i<N;i++)
    {
      cin>>arr[i];
    }
    map<ll,bool>chk;
    queue<ll>Q;
    ll ans=100000000,A=D;
    for(ll i=0;i<=N-D;i++)
    {
      chk[arr[i]]=true;
      ll ans1=1,j=i+1;
      while(D>1)
      {
        if(chk[arr[j]]==false)
        {
          chk[arr[j]]=true;
          if(arr[j]>0)
          ans1++;
          //cout<<"ans1 "<<ans1<<endl;
        }
        j++;
        D--;
      }
      //cout<<"ans1 "<<ans1<<endl;
      ans=min(ans,ans1);
      D=A;
      chk.clear();
    }
    cout<<ans<<endl;
    //V.clear();
  }

  return 0;
}
