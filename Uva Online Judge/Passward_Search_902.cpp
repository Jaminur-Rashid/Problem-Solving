#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<string>
using namespace std;
int n;

void generateSubstring(string str){
  int len=str.length(),i,j;
  map<string,int>patt;
  //cout<<str[0]<<endl;
  for(i=0;i<len-n+1;i++){
    //for(j=1;j<=len-i;j++){
      //cout<<str.substr(i,j)<<endl;
      //string st;
      //st.assign(str.substr(i,j));
      //cout<<st<<" "<<endl;
      //cout<<str.substr(i,j)<<endl;
      patt[str.substr(i,n)]++;
      //cout<<str.substr(i,n)<<endl;
    //}
  }
  map<string,int>::iterator it;
  int maxi=0;
  for(it=patt.begin();it!=patt.end();it++){
      if(it->second>maxi){
        maxi=it->second;
        str=it->first;
      }
  }
  cout<<str<<endl;
  //patt.clear();
}

int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  int i;
  string str;
  while(cin>>n){
    getchar();
    cin>>str;
    generateSubstring(str);
  }
}
