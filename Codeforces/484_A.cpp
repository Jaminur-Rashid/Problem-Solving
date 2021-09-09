#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,s,x,y;
  string str;
  while(cin>>n){
    cin>>str;
    int cnt=0,x=0;
    int flag=1;
    int len=str.size();
    for(i=1;i<len-1;i++){
      if(str[i]=='1'&&str[i+1]!='1'&&str[i-1]!='1'){
        cnt++;
        x++;
      }
      if(str[i]=='1'&&(str[i+1]=='1'||str[i-1]=='1')){
        flag=0;
        break;
      }
    //  if(str[i]=='1'&&str[i+1]!='1'&&str[i-1]!='1'){
      //  x++;
      //}
      if(str[i]=='0'&&str[i+1]=='0'&&str[i-1]=='0'){
        x++;
      }
    }
    if(str[0]=='1'){
      cnt++;
      x++;
    }
    if((str[0]=='0'&&str[1]!='1')||(str[len-1]=='0'&&str[len-2]!='1'))
     {
      x++;
    }
    if(str[len-1]=='1'){
      cnt++;
      x++;
    }
  /*  else{
      x++;
    }
    */
    if(x>cnt||flag==0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
