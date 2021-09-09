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
//#define rrep(X,Y)
#define rrep(X,Y) for(int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
  __FastIO;
  string st,str;
  ll i,j;
  while(cin>>st>>str){
    ll cnt=0;
    ll len=st.length();
    for(i=0;i<len;i++){
      if(st[i]!=st[i]){
        cnt++;
      }
    }
    if(cnt%2!=0){
      cout<<"impossible"<<endl;
    }
    else{
    for(i=0;i<len;i++){
      if(st[i]!=str[i]&&cnt>0){
        if(st[i]=='0'){
          cout<<"1";
          cnt--;
        }
        else{
          cout<<"0";
          cnt--;
        }
      }
      else{
        cout<<st[i];
      }
    }
  }
  cout<<endl;
 }
  return 0;
}
