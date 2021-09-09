#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,i,s;
  string str;
  t=1;
  while(cin>>str){
    if(str=="#"){
      break;
    }
    if(str=="HELLO"){
      cout<<"Case "<<t<<": ENGLISH"<<endl;
    }
  else if(str=="HOLA"){
    cout<<"Case "<<t<<": SPANISH"<<endl;
  }
  else if(str=="HALLO"){
    cout<<"Case "<<t<<": GERMAN"<<endl;
  }
  else if(str=="BONJOUR"){
    cout<<"Case "<<t<<": FRENCH"<<endl;
  }
  else if(str=="CIAO"){
    cout<<"Case "<<t<<": ITALIAN"<<endl;
  }
  else if(str=="ZDRAVSTVUJTE"){
    cout<<"Case "<<t<<": RUSSIAN"<<endl;
  }
  else{
    cout<<"Case "<<t<<": UNKNOWN"<<endl;
  }
  t++;
  }

  return 0;
}
