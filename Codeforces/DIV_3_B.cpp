#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x,pos,i,j;
  string str;
  while(cin>>n){
    cin>>str;
    int len=str.length();
    vector<string>v;
    for(i=0;i<len-n+1;i++){
      int pos=str.find('x');
            cout << str.substr(pos+1) << endl;
            v.push_back(str.substr(i,3));
      }
      for(i=0;i<v.size();i++){
        string st=v[i];
        cout<<st<<endl;
      }
  }
}
