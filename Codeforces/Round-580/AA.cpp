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
//------------------------------------------------------
int main(){
  ll n,i,A,B,N,M,j;
  ll arr[205],brr[205];
  map<ll,bool>mp;
  cin>>N;
  for(i=0;i<N;i++){
    cin>>arr[i];
    mp[arr[i]]=true;
  }
  cin>>M;
  for(i=0;i<M;i++){
    cin>>brr[i];
    mp[brr[i]]=true;
  }
  bool flag=false;
  for(i=0;i<N;i++){
    for(j=0;j<M;j++){
      ll tmp=arr[i]+brr[j];
      if(!mp[tmp]){
        A=arr[i];
        B=brr[j];
        flag=true;
        break;
      }
    }
  }
  if(!flag){
  for(i=0;i<M;i++){
    for(j=0;j<N;j++){
      ll tmp=arr[j]+brr[i];
      if(!mp[tmp]){
        A=arr[i];
        B=brr[j];
        flag=true;
        break;
      }
    }
  }
}
cout<<A<<" "<<B<<endl;
mp.clear();

  return 0;
}
