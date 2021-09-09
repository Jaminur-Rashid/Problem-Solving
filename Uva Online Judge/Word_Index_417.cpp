#include<bits/stdc++.h>
#include<cstdio>
#include<map>
using namespace std;
map<string,int>mp;

int calWordIndex(){
  string str;
  int i,j,k,l;
  int cnt=0;
  //map<string,int>mp;
  str="0";
  for(i=0;i<26;i++){
    str=i+'a';
    mp[str]=++cnt;
    //cout<<cnt<<endl;
  }
  str="00";
  for(i=0;i<26;i++){
    str[0]=i+'a';
    for(j=i+1;j<26;j++){
      str[1]=j+'a';
      mp[str]=++cnt;
      //cout<<cnt<<endl;
    }
  }
//  map<string,int>::iterator it;
  //it=mp.find("az");
  //cout<<mp[*it]<<endl;
 str="000";
  for(i=0;i<26;i++){
    str[0]=i+'a';
    for(j=i+1;j<26;j++){
      str[1]=j+'a';
      for(k=j+1;k<26;k++){
        str[2]=k+'a';
        mp[str]=++cnt;
        //cout<<cnt<<endl;
      }
    //  mp[str]=++cnt;
      //cout<<cnt<<endl;
    }
  }
  map<string,int>::iterator it;
  str="0000";
  for(i=0;i<26;i++){
    str[0]=i+'a';
    for(j=i+1;j<26;j++){
      str[1]=j+'a';
      for(k=j+1;k<26;k++){
        str[2]=k+'a';
        for(l=k+1;l<26;l++){
          str[3]=l+'a';
          mp[str]=++cnt;
          //cout<<it->first<<" "<<it->second<<endl;
        }
      }
    }
  }
str="00000";
  for(i=0;i<26;i++){
    str[0]=i+'a';
    for(j=i+1;j<26;j++){
      str[1]=j+'a';
      for(k=j+1;k<26;k++){
        str[2]=k+'a';
        for(l=k+1;l<26;l++){
          str[3]=l+'a';
          for(int m=l+1;m<26;m++){
            str[4]=m+'a';
            mp[str]=++cnt;
          }
        }
      }
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  calWordIndex();
  string s;
  while(getline(cin,s)){
    cout<<mp[s]<<endl;
  }
  return 0;
}
