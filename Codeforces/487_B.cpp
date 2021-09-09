#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
  int len,i,n,p;
  string str;
  while(cin>>n>>p){
    cin>>str;
    //string tmp=str;
    len=str.size();
    bool flag=false;
    int location,loc1;
    for(i=0;i<len-p;i++){
      if(str[i]=='0'){
        if(str[i+p]=='1'){
          flag=true;
          location=i;
          loc1=i+p;
          break;
        }
        else if(str[i+p]=='.'){
          str[i+p]='1';
          flag=true;
          location=i;
          loc1=i+p;
          break;
        }
      }
      if(str[i]=='1'){
        if(str[i+p]=='0'){
          flag=true;
          location=i;
          loc1=i+p;
          break;
        }
        else if(str[i+p]=='.'){
          str[i+p]='0';
          flag=true;
          location=i;
          loc1=i+p;
          break;
        }
      }
      if(str[i]=='.'){
        if(str[i+p]=='0'){
          str[i]='1';
          //str[i+p]='0';
          flag=true;
          location=i;
          loc1=i+p;
          break;
        }
        else if(str[i+p]=='1'){
          str[i]='0';
          flag=true;
          location=i;
          loc1=i+p;
          break;
        }
        else if(str[i+p]=='.'){
          str[i]='0';
          str[i+p]='1';
          location=i;
          loc1=i+p;
          flag=true;
          break;
        }
      }
    }
    //cout<<str<<endl;
    if(flag){
    //  cout<<str<<endl;
      for(i=0;i<len;i++){
      //  if((i!=location||i!=loc1||str[i]!='0'||str[i]!='1')){
      if(!(i==location||i==loc1||str[i]=='0'||str[i]=='1')){
          str[i]='0';
        }
      }
      cout<<str<<endl;
    }
    else{
      cout<<"No"<<endl;
    }h
  }
  return 0;
}
