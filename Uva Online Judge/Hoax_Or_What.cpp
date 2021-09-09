#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>node[100005];
map<char,int>mp;
void defmap(){
  char ch='a';
  int value=1;
  while(ch<='z'){
    mp[ch]=value;
    value++;
    ch++;
  }
  cout<<mp['z']<<endl;
}
int main(){
  string str;
  int i,j,cnt,sum,n,k;
  defmap();
  cout<<mp['z']<<endl;
  while(cin>>n>>k){
    cin>>str;
    sort(str.begin(),str.end());
    int len=str.length();
    bool flag=true;;
    sum=0;
    cout<<(int)('z')<<endl;
    if((len-1)>=k){
    for(i=0;i<k;i++){
      if(i=0){
        sum=sum+mp[str[i]];
      }
      else if(((int)(str[i])-(int)(str[i-1]))>=2){
        sum+=mp[str[i]];
      }
      else{
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<sum<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  else{
    cout<<"-1"<<endl;
  }
  }
}
