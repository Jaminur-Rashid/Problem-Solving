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
  __FastIO;
  ll w,h,d,r,i,l,m,k;
  string str;
  map<char,int>mp;
  vector<char>D;
  while(cin>>str){
    cin>>k;
    ll len=str.size();
    for(i=0;i<len;i++){
      if(str[i]=='*'){
        mp['*']++;
      }
      else if(str[i]=='?'){
        mp['?']++;
      }
    }
    bool flag=false,flag1=false,flag2=false;
    ll Char=(mp['*']+mp['?']);
    ll Len=(len)-Char;
    if(k<Len){
      if(Len-Char<=K){
        flag=true;
      }
    }
    else if(k==Len){
      flag1=true;
    }
    else if(k>Len){
      if(mp['*']>0){
        flag2=true;
      }
    }
    if(flag==true{
    /*  if((str[0]!='*')||(str[0]!='?')){
        cout<<str[0];
      }
      */
      for(i=0;i<len;i++){
        if(((str[i]!='*')||(str[i]!='?'))&&((str[i+1]=='*')||(str[i+1]=='?')){
          continue;
      }
      else{
        v.push_back(str[i]);
      }
    }
    mp.clear();

  }
  return 0;
}
