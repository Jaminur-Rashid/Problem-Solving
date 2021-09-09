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
  int arr[105];
  int n,i,cnt;
  while(cin>>n){
    map<int,int>mp;
    rep(i,n){
      cin>>arr[i];
      mp[arr[i]]++;
    }
    map<int,int>::iterator it;
    int mx=0;
    for(it=mp.begin();it!=mp.end();it++){
      if((it->second)>mx){
        mx=it->second;
      }
  }
  cout<<mx<<endl;
  mp.clear();
  }
  return 0;
}
