/*
  Author : Jaminur Rashid
  Date : 04-08-2019
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
/*------------------------------------------------------*/
int main(){
  __FastIO;
  ll n,d,r,i,j,l,m,k,A,B,C;
  ll arr[100005];
  while(cin>>n){
    ll sum=0;
    for(i=0;i<2*n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    sort(arr,arr+2*n);
    ll sum1=0;
    for(i=0;i<n;i++){
      sum1+=arr[i];
      sum-=arr[i];
    }
    if(sum==sum1){
      cout<<"-1"<<endl;
    }
    else{
      for(i=0;i<2*n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }

  }
  return 0;
}
