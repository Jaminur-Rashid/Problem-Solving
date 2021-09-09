/*
    Author:Jaminur Rashid
    Date:14.09.2018
    Problem Type:Math
*/
#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
      }
    return gcd(b, a % b);
  }
int main(){
  __FastIO;
  ll N;
  string str;
  map<char,ll>mp;
  while(cin>>N>>str){
    for(ll i=0;i<str.length();i++){
      mp[str[i]]++;
    }
    char ch;
    for(ch='a';ch<='z';ch++){
      if(mp[ch]>0){
        for(ll i=0;i<mp[ch];i++){
          cout<<ch;
        }
      }
    }
    cout<<endl;
    mp.clear();
  }
  return 0;
}
