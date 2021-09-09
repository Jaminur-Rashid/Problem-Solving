#include<bits/stdc++.h>
#include<utility>
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

struct A{
  ll remain,cost;
  int pos;
}arr[100005],Arr[100005];
bool cmp(A a,A b)
{
  if(a.cost==b.cost)
  {
    return a.pos<b.pos;
  }
  return a.cost<b.cost;
}

int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common;
  string str,s1;
  //string arr[505];
  //ll arr[300005];
  while(cin>>n>>m){
    for(i=0;i<n;i++){
      cin>>arr[i].remain;
      Arr[i].remain=arr[i].remain;
    }
  for(i=0;i<n;i++){
      cin>>arr[i].cost;
      Arr[i].cost=arr[i].cost;
      arr[i].pos=i;
    }


sort(arr,arr+n,cmp);
int j=0;
  for(i=0;i<m;i++){
    ll ItemNo,tot,cost;
    cin>>ItemNo>>tot;
    ItemNo--;
    if((Arr[ItemNo].remain>=tot)){
      cost=Arr[ItemNo].cost*Arr[ItemNo].remain;
      Arr[ItemNo].remain-=tot;
      cout<<cost<<endl;
    }
    else{
      ll res=Arr[ItemNo].remain*Arr[ItemNo].cost;
      tot -= Arr[ItemNo].remain;
      Arr[ItemNo].remain=0;
      while(j<n && tot>0)
      {
        int pos=arr[j].pos;
        if(Arr[pos].remain>=tot)
        {
          res +=Arr[ItemNo].cost;
          Arr[ItemNo].remain-=tot;
        }
        else
        {
          res += Arr[pos].remain*Arr[pos].cost;
          tot -= Arr[pos].remain;
          Arr[pos].remain=0;
          j++;
        }
      }
      if(tot!=0) cout<<0<<endl;
      else cout<<res<<endl;
    }

  }
  }
  return 0;
}
