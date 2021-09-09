#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long int ll;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T,n,i,ans;
  ll arr[100004];
  cin>>T;
  while(T--){
    cin>>n;
    ll ans=0;
    for(i=0;i<n;i++){
      cin>>arr[i];
      ans+=(arr[i]-1);
    }
    cout<<ans+1<<endl;
  }
  return 0;
}

