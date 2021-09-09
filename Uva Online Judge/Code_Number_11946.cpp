#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,i,s,sum;
  string str,str1,str2;
  str1="ABCDEFGHIJKLMNOPQRSTUVWXYZ ,.";
  str2="48CD3F6H1JKLMN09QR57UVWXY2 ,.";
  cin>>t;
  cin.ignore(100,'\n');
  while(getline(cin,str)){
    int len=str.size();
    for(i=0;i<len;i++){
      //int pos=str1.find(str[i]);
      int pos=str2.find(str[i]);
    //  cout<<pos<<endl;
      cout<<str1[pos];
    }
    cout<<endl;
  }
 return 0;
}
