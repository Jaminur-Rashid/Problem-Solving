#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  string s1,s2;
  cin>>n>>m;
  getchar();
  map<string,string>mp;
  for(int i=0;i<n;i++){
    cin>>s1>>s2;
    s2.push_back(';');
    mp[s2]=s1;
  }
  for (int i=0;i<m;i++)
  {
    cin>>s1>>s2;
    cout<<s1<<' '<<s2<<" #"<<mp[s2]<<endl;
  }
  }
