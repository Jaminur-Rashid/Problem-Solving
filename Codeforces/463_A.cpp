#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
  string s;
  while(cin>>s){
    string s1,s2;
    s1=s;
    reverse(s1.begin(),s1.end());
    s2=s+s1;
    cout<<s2<<endl;
  }
  return 0;
}
