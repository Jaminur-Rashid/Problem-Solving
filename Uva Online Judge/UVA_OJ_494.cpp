#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int i,j,len,wordNum;
  string str;
  while(getline(cin,str)){
    len=str.size();
    wordNum=0;
    bool mark=true;
    for(i=0;i<len;i++){
      if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
        if(mark){
          wordNum++;
          mark=false;
        }
      }
      else{
        mark=true;
      }
    }
    cout<<wordNum<<endl;
  }
}
