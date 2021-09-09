#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll Mat(ll a[10],ll i,ll j){
  if(i==j){
    return 0;
  }
  ll cnt=0;
  ll mini=100000000;
  for(ll k=i;k<j;k++){
    cnt=Mat(a,i,k)+Mat(a,k+1,j)+a[i-1]*a[k]*a[j];
    mini=min(mini,cnt);
  }
  return mini;
}
int main(){
  ll arr[10],n;
  cin>>n;
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll mini=Mat(arr,1,n-1);
  cout<<mini<<endl;
}
