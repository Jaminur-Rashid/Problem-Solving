#include<bits/stdc++.h>
#include<cmath>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)


int main(){
  __FastIO;
  ll n,x,i,y;
  vector<ll>v,v1;
  map<ll,ll>mp;
  ll arr[20007],arr1[20007];;
  while(cin>>n){
    for(i=1;i<=n;i++){
      cin>>arr[i];
      mp[arr[i]]=i;
    }
    ll lim=0;
    for(i=1;i<=n;i++){
      ll s;
      cin>>s;
      ll cnt=0;
      if(mp[s]!=0){
        x=mp[s];
        for(y=x;y>=lim;y--){
          cnt++;
          mp[arr[y]]=0;
        }
      }
      arr1[i]=cnt;
      if(!(x+1>n))
      lim=x+1;
  }
  for(i=0;i<n;i++){
    cout<<arr1[i]<<"  ";
  }
  cout<<endl;
  //v.clear();
}
return 0;
}
