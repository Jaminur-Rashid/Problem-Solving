#include<bits/stdc++.h>

using namespace std;
bool isVowel(char ch)
{
    return (ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u');
}
int main(){
  string str;
  int len,i,j;
  while(cin>>str){
    len=str.length();
    //(str[i]!='a')||(str[i]!='e')||(str[i]!='o')||(str[i]!='u')||(str[i]!='i')
    bool flag=true;
    for(i=0;i<len-1;i++){
      if(str[i]=='n'){
        flag=true;
      }
      else{
    if(!isVowel(str[i])){
      if((str[i+1]=='a')||(str[i+1]=='e')||(str[i+1]=='o')||(str[i+1]=='u')||(str[i+1]=='i')){
        flag=true;
      }
      else{
        flag=false;
        break;
      }
    }
   }
  }
  if((!isVowel(str[len-1]))||(str[len-1])!='n'){
    flag=false;
  }

  if(flag){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  }
  return 0;
}
