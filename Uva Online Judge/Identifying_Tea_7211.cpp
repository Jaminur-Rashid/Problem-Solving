#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,i,t;
  while(cin>>t){
    map<int,int>mp;
    vector<int>v;
    for(i=0;i<5;i++){
      cin>>a;
      mp[a]++;
      v.push_back(a);
    }
    cout<<mp[t]<<endl;
    mp.clear();
    v.clear();
  }
  return 0;
}
