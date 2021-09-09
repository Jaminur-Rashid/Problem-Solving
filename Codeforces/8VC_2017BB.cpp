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
ll arr[100005],br[100005];
int main(){
  __FastIO;
  ll n,d,r,i,l,m,common;
  string s,s1;
  while(cin>>n>>m){
    map<string,bool>mp;
    for(i=0;i<n;i++){
      cin>>s;
      mp[s]=true;
    }
    common=0;
    for(i=0;i<m;i++){
      cin>>s1;
      if(mp[s1]==true){
        common++;
      }
    }
    n-=common;
    m-=common;
    if(common%2){
      n++;
    }
    if(n>m){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    /*if(n>m){
      cout<<"YES"<<endl;
    }
    else if(m>n){
      cout<<"No"<<endl;
    }
    else if(common%2==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    */
    mp.clear();
    }
    return 0;
}
