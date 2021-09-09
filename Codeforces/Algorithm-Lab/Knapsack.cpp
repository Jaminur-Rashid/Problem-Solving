#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll Max(ll x,ll y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}
ll knapsack(ll n,ll wt[100],ll val[100],ll W){
  ll Tot[100][100];
  for(ll i=0;i<=n;i++){
    Tot[0][W]=0;
  }
  for(ll i=0;i<=n;i++){
    Tot[i][0]=0;
  }
  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=W;j++){
      if(wt[i]<=j){
        Tot[i][j]=Max(Tot[i-1][j],val[i]+Tot[i-1][j-wt[i]]);
      }
      else{
        Tot[i][j]=Tot[i-1][j];
      }
    }
  }
  for(ll i=0;i<=n;i++){
    for(ll j=0;j<=W;j++){
      cout<<Tot[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<Tot[n][W]<<endl;
}
int main(){
  ll n,m,W;
  ll wt[100],val[100];
  cin>>m>>W;
  for(ll i=0;i<m;i++){
    cin>>wt[i];
  }
  for(ll i=0;i<m;i++){
    cin>>val[i];
  }
  knapsack(m,wt,val,W);
}
