#include<bits/stdc++.h>

using namespace std;
typedef  int ll;
vector<int>adj[100005];
bool Vis[100005];
ll fun(ll n,ll m){
  ll cnt=0;
  if(n==0){

    m=m+1;
  }
  if(m==0){
    cnt++;
    fun(n-1,1);
  }
  else{
    cnt++;
    fun(n-1,fun(n,m-1));

  }
  return cnt;
}
int main() {
  ll n,m;
  cin>>n>>m;
  ll ans=fun(n,m);
  cout<<ans<<endl;
  return 0;
}
