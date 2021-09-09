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
  ll i,j,cnt,n;
  ll arr[1005];
  ll arr1[10005];
  vector<ll>v;
  string st,stt;
  while(cin>>n){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<ll>v;
    cnt=1;
    ll sum=1;
    for(i=1;i<n;i++){
      if((arr[i]<arr[i-1])||(arr[i]==1&&arr[i-1]==1)){
        v.push_back(sum);
        cnt++;
        sum=1;
      }
      else{
        sum++;
      }
    }
    v.push_back(arr[n-1]);
    cout<<cnt<<endl;
    for(i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();
  }
  return 0;
}
