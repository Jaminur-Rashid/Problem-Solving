#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll j,n,cnt;
  while(cin>>n){
    //vector<ll>v;
    bool flag=true;
    ll temp;
    for(int i=0;i<n;i++){
      ll x,y;
      cin>>x>>y;
      if(i==0){
       temp=max(x,y);
       //v.push_back(temp);
      }
      else{
        ll purr=max(x,y);
        if(temp>=purr){
          //v.push_back(purr);
          temp=purr;
        }
        else{
          ll pur=min(x,y);
          if(temp>=pur){
            //v.push_back(pur);
            temp=pur;
        }
        else{
          flag=false;
          //break;
        }
       }
       }
     }
     if(flag){
       cout<<"yes"<<endl;
     }
     else{
     cout<<"No"<<endl;
   }
   //v.clear();
 }
  return 0;
}
