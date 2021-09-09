/*
Author:Jaminur Rashid
Date  :24/2/2019
*/
#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<queue>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
vector<ll> is_prime(10005, true);
vector< pair <ll,ll> > pos,pos1;

bool check(char str){
  int i;
  if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common,q,a,b;
  string str,s1;
  //map<ll,bool>mp;
  while(cin>>n){
    ll N=2*n;
    ll Arr[100005][2];
    //vector<int>Arr[100005];
    Arr[0][0]=0,Arr[0][1]=0;
    for(i=1;i<=N;i++){
      int x;
      cin>>x;
      if(Arr[x][0]){
      Arr[x][1]=i;
      //Arr[x].push_back(i);
      }
      else{
        Arr[x][0]=i;
        //Arr[x].push_back(i);
      }
    }
    ll pos=1,pos1=1;
    ll ans=0;
    for(i=1;i<=n;i++){
      ll val=(abs)(pos-Arr[i][0])+abs(pos1-Arr[i][1]);
      ll val1=abs(pos-Arr[i][1])+abs(pos1-Arr[i][0]);
      ans+=(min(val,val1));
      if(val>val1){
        pos=Arr[i][1];
        pos1=Arr[i][0];
      }else{
        pos=Arr[i][0];
        pos1=Arr[i][1];
      }
      //cout<<val<<" "<<val1<<" "<<pos<<" "<<pos1<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    //Arr.clear();
  }


  return 0;
}
