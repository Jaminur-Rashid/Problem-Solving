#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string str;
  int link,pearls,i,j;
  while(getline(cin,str)){
    link=0;
    pearls=0;
    int len=str.length();
    for(i=0;i<len;i++){
      if(str[i]=='o'){
        pearls++;
      }
      else{
        link++;
      }
    }
    if(link==0&&pearls!=0){
      cout<<"YES"<<endl;
    }
    else if(link!=0&&pearls==0){
      cout<<"YES"<<endl;
    }
    else{
      if(link%pearls==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }

  }
  return 0;
}
