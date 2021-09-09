#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,i,s;
  string str;
  cin>>t;
  while(t--){
    cin>>str;
    int len=str.size();
    if(len==5){
      cout<<"3"<<endl;
    }
    else if(str[0]=='o'&&str[2]=='e'||str[0]=='o'&&str[1]=='n'||str[1]=='n'&&str[2]=='e'){
      cout<<"1"<<endl;
    }
    else{
      cout<<"2"<<endl;
    }

  }
 return 0;
}
