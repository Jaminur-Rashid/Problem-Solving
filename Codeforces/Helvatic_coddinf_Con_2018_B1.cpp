#include<bits/stdc++.h>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
  int n,u,v,i,couunt,ans;
  while(cin>>n){
    vector<int>graph[10000];
    for(i=1;i<n;i++){
      cin>>u>>v;
      graph[v].push_back(u);
      graph[u].push_back(v);
    }
    couunt=0;
    for(i=1;i<=n;i++){
      if(graph[i].size()==1){
        couunt++;
      }
    }
    cout<<couunt<<endl;


  }
  return  0;
}
