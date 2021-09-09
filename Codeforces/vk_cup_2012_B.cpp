**************************************
* Author:Jaminur Rashid
*
*
*
*
*
*
*-
*-------------------------------------------
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

bool isVowel(char ch){
  return(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='O'||ch=='o'||ch=='u'||ch=='U'||ch=='Y'||ch=='y');
}
int main(){
  ll n,m,a,i,ans;
  string str;
  map<ll,ll>mp;
  vector<ll>v;
  while (cin>>n){
    ll i=0;
    ll sum=0;
    while(n--){
      ll x;
      cin>>x;
      v.push_back(x);
      mp[x]++;
      sum+=x;
    }
    ans=mp[4];mp[4]=0;
    ans=ans+mp[3];
    mp[1]-=mp[3];
    ans+=(mp[2]/2);
    mp[2]=mp[2]%2;
    if(mp[2]!=0){
      ans++;
      mp[1]-=2;
    }
    if(mp[1]>0){
      double s=(ceil((double)mp[1]/4.0));
      //cout<<s<<endl;
      ans+=(ll)(s);
    }
    cout<<ans<<endl;
    mp.clear();
    }
  return 0;
}
