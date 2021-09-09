#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int a,b,c;
  while(cin>>a>>b>>c){
    if(a==0&&b==0&&c==1||a==1&&b==1&&c==0){
      cout<<"C"<<endl;
    }
    else if((a==0&&b==1&&c==1)||a==1&&b==0&&c==0){
      cout<<"A"<<endl;
    }
    else if((a==0&&b==1&&c==0)||(a==1&&b==0&&c==1)){
      cout<<"B"<<endl;
    }
    else{
      cout<<"*"<<endl;
    }
  }
  return 0;
}
