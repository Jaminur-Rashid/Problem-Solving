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
  while(cin>>n){
    if(n<=2){
      cout<<"No"<<endl;
    }
    else{
      ll even=0,odd=0;
      vector<ll>v,v1;
      for(i=1;i<=n;i++){
        if(i%2==0){
          v.push_back(i);
        }
        else{
          v1.push_back(i);
        }
      }
      cout<<"Yes"<<endl;
      cout<<v.size()<<" ";
      for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
      cout<<v1.size()<<" ";
      for(i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
      }
      cout<<endl;
      v.clear();
      v1.clear();
    }
  }
  return 0;
}
