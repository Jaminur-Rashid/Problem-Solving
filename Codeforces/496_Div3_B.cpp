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
  string s,str;
  ll i,j;
  while(cin>>s>>str){
    ll len=s.size();
    ll len1=str.size();
    ll moveNum=(len+len1);
    for(i=len-1,j=len1-1;(i>=0||j>=0);i--,j--){
      if(s[i]==str[j]){
        moveNum-=2;
      }
      else{
        break;
      }
    }
    cout<<moveNum<<endl;
  }
  return 0;
}
