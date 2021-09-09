#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,i,s;
  while(cin>>n){
  vector<int>v;
  for(i=0;i<n;i++){
    cin>>s;
    v.push_back(s);
  }
  sort(v.begin(),v.end());
  int x=0,y=0;
  i=0;
  bool first=true,second=false;
  while(i<n-1){
    if(first){
      y++;
      second=true;
      first=false;
      i++;
    }
    else if(second){
      x++;
      first=true;
      second=false;
      i++;
    }
  }
  if(n%2==1){
    cout<<v[x]<<endl;
  }
  else{
  int ans=min(x,y);
  cout<<v[ans]<<endl;
}
  v.clear();
}
  return 0;
}
