/*
    Author:Jaminur Rashid
    Date:25.09.2018
    Problem Type:Greedy
*/
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
  ll n,d,r,i;
  vector<ll>arr;
  while(cin>>n>>d>>r){
    if(n==0&&d==0&&r==0){
      break;
    }
    ll Mor[105],Eve[105];
    for(i=0;i<n;i++){
      cin>>Mor[i];
      }
      for(i=0;i<n;i++){
        cin>>Eve[i];
      }
    sort(Mor,Mor+n);
    sort(Eve,Eve+n);
    for(i=0;i<n;i++){
      arr.push_back((Mor[i]+Eve[n-i-1]));
      //cout<<arr[i]<<" ";
    }
    //cout<<endl;
    ll ans=0;
    for(i=0;i<arr.size();i++){
      if(arr[i]>d){
        ans=ans+((arr[i]-d)*(r));
      }
    }
    cout<<ans<<endl;
    arr.clear();
  }
  return 0;
}
