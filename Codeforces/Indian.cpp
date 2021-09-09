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
vector<ll> is_prime(10005, true);
void prime(){
//vector<ll> is_prime(10005, true);
for (ll i = 2; i <= 10005; i++) {
    if (is_prime[i] && (i * i) <= 10005) {
        for (ll j = i * i; j <= 10005; j += i)
            is_prime[j] = false;
    }
}
}
bool check(char str){
  int i;
  if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  ///  #00001a Content Colour
  __FastIO;
  ll n,d,r,i,l,j,m,common;
  string str,s1;
  while(cin>>str>>s1){
    ll len=str.size(),len1=s1.size();
    if(len!=len1){
      cout<<"No"<<endl;
    }
    else{
      bool flag=false;
      for(i=0;i<len;i++){
        if((check(str[i])!=check(s1[i]))){
          cout<<"No"<<endl;
          flag=true;
          break;
        }
      }
      if(!flag){
        cout<<"Yes"<<endl;
      }
  }
}
  return 0;
}
