#include<bits/stdc++.h>
#include<cstdio>
#include<map>
using namespace std;
void generateSubstring(string st){
  map<string,int>mp;
  int len=st.size();
  for(int i=0;i<len-2+1;i++){
    mp[st.substr(i,2)]++;
    //cout<<st.substr(i,2)<<endl;
  }
  map<string,int>::iterator it;
  int mxx=0;
  for(it=mp.begin();it!=mp.end();++it){
     if(it->second>mxx){
       st=it->first;
       mxx=it->second;
     }
  }
  cout<<st<<endl;
}
int main(){
string str;
int i,j,ans;
while(cin>>ans){
  getchar();
  getline(cin,str);
  generateSubstring(str);
 }
}
