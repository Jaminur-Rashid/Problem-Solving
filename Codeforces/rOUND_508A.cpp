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
map<char,ll>mp;
void pre(){
  char ch='A';
  while(ch<='Z'){
    mp[ch]=0;
    ch++;
  }
}
int main(){
  string str;
  ll n,k,j,i,len,cnt;
  while(cin>>n>>k){
    cin>>str;
    pre();
    len=str.size();
    for(i=0;i<len;i++){
      mp[str[i]]++;
    }
    map<char,ll>::iterator it;
    it=mp.begin();
    char ch='A';
    ll j=0,min=100000;
    //cout<<mp['A']<<endl;
    while((ch<='Z'&&it!=mp.end()&&j<k)){
      if(mp[ch]<min){
        min=mp[ch];
      }
      ch++;
      j++;
      it++;
    }
    cout<<(k*min)<<endl;
    mp.clear();
  }
  return 0;
}
