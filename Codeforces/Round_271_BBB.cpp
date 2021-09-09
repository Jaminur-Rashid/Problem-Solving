#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
ll n,m,arr[100005],precal[100005];

ll binarySearch(ll x){
  ll low=1,high=n,ans=0;
  while(low<=high){
    ll mid=(low+high)/(2);
    if(precal[mid]>x){
      high=mid-1;
    }
    else if(precal[mid]<x){
      low=mid+1;
    }
    else if(precal[mid]==x){
      ans=mid;
      return(ans);
      break;
    }
  }
  if(ans=0){
    return(ans+1);
  }
  //return ans;
}
int main(){
  ll i,j;
  while(cin>>n){
  precal[0]=0;
  for(i=1;i<=n;i++){
    cin>>arr[i];
    precal[i]=precal[i-1]+arr[i];
  }
  cin>>m;
  for(i=0;i<m;i++){
    ll level;
    cin>>level;
    ll lev=binarySearch(level);
    cout<<lev<<endl;
  }
  }
  return 0;
}
