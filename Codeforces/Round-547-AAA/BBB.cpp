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
int arr[300005],br[100005];
//AAAA
int main(){
  __FastIO;
  ll n,m,x,y,z,i;
  while(cin>>n>>m){
    ll cnt=0;
    bool flag=true;
    while(n<=m){
      if((m)%(n*2)==0){
        n=n*2;
        //cout<<n<<" ";
        cnt++;
      }
      else if((m)%(n*3)==0){
        n=n*3;
        //cout<<n<<" ";
        cnt++;
      }
      else{
        break;
      }
    }
    if(n==m){
      cout<<cnt<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
}
/*int main(){
  __FastIO;
  ll i,n,q,m;
  while(cin>>n){
    ll arr[200005];
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    ll x=0,cnt=0,cnt1=0,y=n-1;
    if(arr[0]==1){
    while(arr[x]==1){
      cnt++;
      x++;
    }
  }
  if(arr[n-1]==1){
    while(arr[y]==1){
      cnt1++;
      y--;
    }
  }
    ll tot=0,tot1=0;
    for(i=0;i<n;i++){
    if (arr[i]==0){
      tot1=0;
    }
    else
    {
      tot1++;
      tot = max(tot,tot1);
    }
  }
  cout<<max(tot,(cnt+cnt1))<<endl;
  }
  /*while(cin>>n){
    ll sum=0;
    for(i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    sort(arr,arr+n);
    cin>>m;
    ll mx=1000000007;
    for(i=0;i<m;i++){
      ll x;
      cin>>x;
      cout<<(sum-arr[n-x])<<endl;
    }
    //cout<<(sum-arr[n-mx])<<endl;
  }
    return 0;
}
*/
