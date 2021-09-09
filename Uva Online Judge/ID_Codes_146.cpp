#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  string str;
  int i,j;
  while(getline(cin,str)){
  if(str=="#"){
    break;
  }
  bool chk=next_permutation(str.begin(),str.end());
  if(chk){
    cout<<str<<endl;
  }
  else{
    cout<<"No Successor"<<endl;
  }
}
  return 0;
}
