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
  map<int,int>mp;
  cin>>testCase;
  while (testCase--)
  {
    cin>>N;
    for(int i=0;i<N;i++)
    {
      int p,s;
      cin>>p>>s;
      if(mp[p]<s and p<=8)
      {
        mp[p]=s;
      }
    }
    map<int,int>::iterator it;
    int myScore=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
      myScore+=it->second;
    }
    cout<<myScore<<endl;
    mp.clear();
  }
  return 0;
}
