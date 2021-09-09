#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,i,s,sum;
  string str;
  cin>>t;
  while(t--){
    cin>>str;
    int len=str.size();
    sum=0;
    s=0;
    for(i=0;i<len;i++){
      if(str[i]=='O'){
        s++;
        sum+=s;
      }
      else{
        s=0;
      }
    }
    cout<<sum<<endl;
  }
 return 0;
}
