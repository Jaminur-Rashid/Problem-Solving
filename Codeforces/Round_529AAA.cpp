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
  ll n,d,r,i,l,m;
  string str;
  while(cin>>str){
    map<char,bool>mp;
    for(i=0;i<5;i++){
      string tmp;
      cin>>tmp;
      mp[tmp[0]]=true;
      mp[tmp[1]]=true;
    }
    if((mp[str[0]])||(mp[str[1]])){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    mp.clear();
  }
  return 0;
}
