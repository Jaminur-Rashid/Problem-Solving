#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  ll n,k,days,i,j;
  vector<ll>v;
  while(cin>>days){
    while(days--){
      cin>>k;
      while(k--){
        ll x;
        cin>>x;
        v.push_back(x);
      }
    }
    sort(v.begin(),v.end());
    ll cost=0;
    ll low=0,high=v.size()-1;
    ll point=v.size();
    if(point%2==0){
      while((high-low)>=1){
        cost+=(v[high]-v[low]);
        low++;
        high--;
      }
    }
    else{
      while((high-low)>=2){
        cost+=(v[high]-v[low]);
        low++;
        high--;
      }
    }
    cout<<cost<<endl;
    v.clear();
  }
}
