#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
  ll n,i,j;
  while(cin>>n){
    if(n==0){
      break;
    }
    vector<ll>v;
    for(i=0;i<n;i++){
      ll x;
      cin>>x;
      if(x>0){
        v.push_back(x);
      }
    }
    if(v.size()==0){
      cout<<"0"<<endl;
    }
    else{
    for(i=0;i<v.size();i++){
      cout<<v[i];
      if(i!=v.size()-1){
        cout<<" ";
      }
    }
    cout<<endl;
  }

  //.  v.clear();
  }
  return 0;
}
