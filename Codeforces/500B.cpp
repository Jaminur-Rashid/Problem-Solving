/*Author:Jaminur Rashid
  Dept. of CSE,MBSTU
  Date:30/7/2018
*/
#include<bits/stdc++.h>
#include<map>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
typedef long long int ll;

int main(){
  ll arr[100005],arr1[100];
  ll i,j,n,sum,sum1,x,mx=0;
  while(cin>>n>>x){
    bool flag=false;
    map<ll,ll>mp;
    map<ll,ll>mp1;
    map<ll,ll>::iterator it;
    for(i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
      if((mp[arr[i]])>=2){
        flag=true;
      }
    }
    if(flag){
      cout<<"0"<<endl;
    }
    else{
      ll mx=0;
      ll sign=0;
      for(i=0;i<n;i++){
        ll val=(arr[i]&x);
        if(val!=arr[i]){
          mp[val]++;
          mp1[val]++;
          mx=max(mx,mp1[val]);
        }
        if(mp[val]>1){
          cout<<"1"<<endl;
          flag=true;
          break;
        }
      }
    }
    cout<<mx<<endl;
    if(flag==false){
      if(mx>=2){
        cout<<"2"<<endl;
      }
      else{
        cout<<"-1"<<endl;
      }
    }
    mp.clear();
    mp1.clear();
  }
  return 0;
}
