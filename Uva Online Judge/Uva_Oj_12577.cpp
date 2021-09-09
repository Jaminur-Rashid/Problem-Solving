#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){
  string s;
  int casenum=0;
  while(getline(cin,s)){
      if(s=="*"){
      break;
      }
      casenum++;
      if(s=="Hajj"){
        cout<<"Case "<<casenum<<": Hajj-e-Akbar"<<endl;
      }
       if(s=="Umrah"){
        cout<<"Case "<<casenum<<": Hajj-e-Asghar"<<endl;
      }

  }
  return 0;
}
