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
int main(){
  __FastIO;
  ll n,d,r,i,l,m,p;
  while(cin>>n){
    m=0,r=1,l;
    p=0;
    //map<ll,ll>mp,mp1;
    ll arr[100005],mp[100005],mp1[100005];
    memset(mp,0,sizeof(mp));
    memset(mp,0,sizeof(mp1));
    for(i=0;i<n;i++){
      //cin>>arr[i];
      cin>>d;
      if(i==0){
        l=d;
      }
      if(d!=l){
        m=1;
      }
      mp1[d]++;
      if(mp[d]==0){
        mp[d]=r;
        r++;
      }
    }
  //  int p=0;
    //if(r-1)
    if(m==1){
    for(i=0;i<n;i++){
      if(n-mp1[arr[i]]!=arr[i]){
        cout<<"Impossible"<<endl;
        p=1;
        break;
      }
    }
  }
    if(p==0){
      cout<<"Possible"<<endl;
      for(i=0;i<n;i++){
        if(mp[i]!=0){
        cout<<mp[i]<<" ";
      }
      cout<<endl;
    }
  }
    //mp.clear();
    //mp1.clear();
    /*if(n==2){
      cout<<"2"<<endl;
    }
    else{
      cout<<"1"<<endl;
    }
    */
  }
  return 0;
}
