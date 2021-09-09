//Round-605 div 3
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

ll countSubstr(ll n)
{
   ll ans=n*(n+1)/2;
   return(ans);
}
int main()
{
  ll N,M,A,B,C,D,testCase,K;
  ll arr[1005],brr[100005];
  map<ll,ll>mp;
  vector<ll>v,v1;
  vector< pair<ll,ll> >Pair;
  cin>>testCase;
  while(cin>>A>>B>>C)
  {
    ll ap=A+1,bp=B+1,cp=C+1,am=A-1,bm=B-1,cm=C-1;
    ll ans=999999999999;
    //cout<<(abs(ap-bp))+(abs(bp-cm))+(abs(ap-cm))<<endl;
    ans=min(abs(ap-bp)+abs(bp-cp)+abs(ap-cp),ans);
    ans=min(((abs(ap-bp))+(abs(bp-cm))+(abs(ap-cm))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(ap-bm))+(abs(bm-cp))+(abs(ap-cp))),ans);
  //  cout<<ans<<endl;
    ans=min(((abs(am-bp))+(abs(bp-cp))+(abs(am-cp))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(ap-bm))+(abs(bm-cm))+(abs(ap-cm))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(am-bp))+(abs(bp-cm))+(abs(am-cm))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(am-bm))+(abs(bm-cp))+(abs(am-cp))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(am-bm))+(abs(bm-cm))+(abs(am-cm))),ans);
    //cout<<ans<<endl;

    ans=min(((abs(A-B))+(abs(B-C))+(abs(A-C))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(ap-bp))+(abs(bp-C))+(abs(ap-C))),ans);
  //  cout<<ans<<endl;
    ans=min(((abs(ap-B))+(abs(B-cp))+(abs(ap-cp))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(A-bp))+(abs(bp-cp))+(abs(A-cp))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(am-bm))+(abs(bm-C))+(abs(am-C))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(am-B))+(abs(B-cm))+(abs(am-cm))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(A-bm))+(abs(bm-cm))+(abs(A-cm))),ans);
  //  cout<<ans<<endl;
    ans=min(((abs(ap-bm))+(abs(bm-C))+(abs(ap-C))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(am-bp))+(abs(bp-C))+(abs(am-C))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(A-bp))+(abs(bp-cm))+(abs(A-cm))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(A-bm))+(abs(bm-cp))+(abs(A-cp))),ans);
    //cout<<ans<<endl;
    ans=min(((abs(ap-bm))+(abs(bm-C))+(abs(ap-C))),ans);
    //cout<<ans<<endl;
   ans=min(((abs(am-bp))+(abs(bp-C))+(abs(am-C))),ans);
    cout<<ans<<endl;
  }
  return 0;
}

/*int main(){
  ll N,M,A,B,C,D,testCase,K;
  ll arr[1005],brr[100005];
  map<ll,ll>mp;
  vector<ll>v,v1;
  vector< pair<ll,ll> >Pair;
  //cin>>testCase;
  while(cin>>N>>K)
  {
    string str;
    cin>>str;
    for(int i=0;i<K;i++)
    {
      char ch;
      cin>>ch;
      mp[ch]=1;
    }
    int cnt=0;
    for(int i=0;i<N;i++)
    {
      if(mp[str[i]])
      {
        cnt++;
        if(i==N-1 and cnt>0)
        {
          v.pb(cnt);
        }
      }
      else
      {
        if(cnt>0)
        {
          v.pb(cnt);
          cnt=0;
        }
      }
    }
    ll  ans=0;
    for(int i=0;i<v.size();i++)
    {
      //cout<<v[i]<<" ";
      ans+=countSubstr(v[i]);
    }
    //cout<<endl;
    cout<<ans<<endl;
    v.clear();
    mp.clear();
  }
  return 0;
}
*/
