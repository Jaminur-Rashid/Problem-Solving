#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,x=0;
  map<int,int>mp;
  vector<int>v;
  while(cin>>n){
    //cin>>n;
    //mp[n]++;
    v.push_back(n);
    x++;
  }
//vector<int>::iterator it;
int it;
  for(it=0;it<x;it++){
    mp[v[it]]++;
    //cout<<v[it]<<" "<<endl;
  }
  for(it=0;it<x;it++){
    if(v[it]){
    if(mp[v[it]]>0){
      cout<<v[it]<<" "<<mp[v[it]]<<endl;
      //mp[v[it]]=0;
      mp.erase(v[it]);
    }
  }
  }
 /*map<int,int>::iterator itr;
  for(itr=mp.begin();itr!=mp.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
  }
  */

  v.clear();
  mp.clear();
  return 0;
}
