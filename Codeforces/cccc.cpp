#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,j,ans;
  int arr[1005];
  while(cin>>n){
    map<int,int>mp;
    for(i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
    }
    vector<int>v;
    vector<int>v1;
    map<int,int>::iterator it;
    int cnt=0,s=0;
    for(i=0;i<n;i++){
      if(mp[arr[i]]==1){
        v.push_back(arr[i]);
        s++;
      }
      else{
        mp[arr[i]]--;
      }
    }
   cout<<s<<endl;
   for(i=0;i<s;i++){
     cout<<v[i]<<" ";
   }
   cout<<endl;
   mp.clear();
   v.clear();

   }
}
