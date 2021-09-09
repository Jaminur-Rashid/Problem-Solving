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
  ll N,M,A,B,C,D,testCase,K,pos;
  vector< pair <int,int> > v;
  ll pre[200005];
  cin>>testCase;
  while(testCase--)
  {
    cin>>N;
    for(ll i=0;i<N;i++)
    {
      ll x;
      cin>>x;
      if(x==1)
      {
        pos=i;
      }
      v.push_back( make_pair(x,i));
      if(i==0)
      {
        pre[i]=x;
      }
      else
      {
        pre[i]=pre[i-1]+x;
      }
    }
   //brr[0]=Val[0].v;
   for(ll i=0;i<N;i++)
   {
    //brr[i]=brr[i-1]+Val[i].v;
     cout<<" val "<<pre[i]<<endl;
   }
   cout<<pos<<endl;
   map<int,bool>cnt;
   for(int i=0;i<N;i++)
   {
     ll tmp=v[i].first;
     ll tmp1=v[i].second;
     if(tmp==1)
     {
       cnt[1]=true;
     }
     else
     {
       cout<<v[i].first<<" "<<v[i].second<<endl;
       cout<<"Pos "<<pos<<" tmp "<<tmp1<<endl;
       ll res;
       if(pos>tmp1)
       {
          res=pre[pos];
       }
       else
       {
           res=pre[tmp1];
       }
      //res=pre[pos]<<endl;

       cout<<" res "<<res<<endl;
       if(((tmp)*(tmp+1))/(2)==tmp)
       {
         cout<<"yes"<<endl;
         cnt[tmp]=true;
       }
     }
   }

  }
  return 0;
}
