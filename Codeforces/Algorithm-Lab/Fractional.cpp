#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Max 10
ll arr[Max][Max];

double fractionalKnapsack(ll wt[100],ll val[100],double ratio[100],ll n,ll W){
  ll curWeight=0;
  double tot=0.0;
  sort(ratio,ratio+n);
  for(ll i=0;i<n;i++){
    if(curWeight+wt[i]<=W){
      curWeight+=wt[i];
      tot=tot+(double)val[i];
    }
    else{
      ll remain=W-curWeight;
      tot=tot+(double)(remain*ratio[i]);
    }
  }
  cout<<tot<<endl;
}

int main(){
  ll n,wt[100],val[100],W;
  cin>>n>>W;
  for(ll i=0;i<n;i++){
    cin>>wt[i];
  }
  for(ll i=0;i<n;i++){
    cin>>val[i];
  }
  double ratio[100],x;
  for(ll i=0;i<n;i++){
    x=(double)val[i]/(double)wt[i];
    ratio[i]=x;
  }
  for(ll i=0;i<n;i++){
    cout<<ratio[i]<<" ";
  }
  fractionalKnapsack(wt,val,ratio,n,W);
}
