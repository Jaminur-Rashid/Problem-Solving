#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,one,x;
  while(cin>>n){
    map<int,int>mp;
    for(i=0;i<n;i++){
      cin>>x;
      mp[x]++;
    }
    if(mp[1]){
      cout<<"HARD"<<endl;
    }
    else{
      cout<<"EASY"<<endl;
    }
    mp.clear();
  }
  return 0;
}
