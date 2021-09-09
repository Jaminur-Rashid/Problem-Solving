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
ll arr[200005],brr[20005];
int main(){
  __FastIO;
  ll i,n,q,m,sum,ans,res,T,j,k;
  string str;
  vector<ll>v,v1;
  while(cin>>n){
    map<ll,ll>mp;
    for(i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
    }
    bool flag=false;
    for(i=0;i<n;i++){
      if(mp[arr[i]]>2){
        cout<<"No"<<endl;
        flag=true;
        break;
      }
      else if(mp[arr[i]]==2){
        v.push_back(arr[i]);
        v1.push_back(arr[i]);
        mp[arr[i]]=0;
      }
      else if(mp[arr[i]]==1){
        v.push_back(arr[i]);
      }
    }
    vector<ll>B;
    //sort(B.begin(),B.end());
    //cout<<B[0]<<endl;
  //  sort(v.begin(),v.end());
  //  sort(v1.begin(),v1.end());
    if(!flag){
      cout<<"Yes"<<endl;
      cout<<v.size()<<endl;
      if(!v.size()){
        cout<<endl;
      }
      if(v.size()>0){
      sort(v.begin(),v.end());
      for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
    }
      cout<<v1.size()<<endl;
      if(!v1.size()){
        cout<<endl;
      }
      if(v1.size()>0){
      sort(v1.begin(),v1.end());
      for(i=v1.size()-1;i>=0;i--){
        cout<<v1[i]<<" ";
      }
      cout<<endl;
    }
    }
    v.clear();
    v1.clear();
  }
  return 0;

}
