#include<bits/stdc++.h>
#include<set>
#include<queue>
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
ll arr[100005],brr[100005];
int main(){
  ll N,M,A,B,C,D,i,testCase,K;
  map<ll,ll>mp;
  cin>>N>>K>>A;
  for(i=0;i<A;i++){
    ll x;
    cin>>x;
    mp[x]++;
  }
  for(i=1;i<=N;i++){
    ll val=K-(A-mp[i]);
    if(val<=0){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }
  }
  mp.clear();
  /*string str;
  while(cin>>str){
    if(str=="Sunny"){
      cout<<"Cloudy"<<endl;
    }
    else if(str=="Cloudy"){
      cout<<"Rainy"<<endl;
    }
    else{
      cout<<"Sunny"<<endl;
    }
  }
  */
  return 0;
}