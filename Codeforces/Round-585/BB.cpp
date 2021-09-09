/*@@@@@@@@@@@@@@@@@@@@@@@@@@
  Author:Jaminur Rashid    @
  Date:18-09-2019          @
 @@@@@@@@@@@@@@@@@@@@@@@@@@*/
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
ll arr[1000005],brr[1000005];
bool isPowerOfTwo (ll x)  {
    return x && (!(x&(x-1)));
}
int main(){
  ll N,M,A,B,C,D,testCase,K;
  string str;
  map<ll,ll>mp;
  map<ll,bool>mark;
  vector<ll>V;
  cin>>testCase;
  while(testCase--){
    cin>>N;
    for(ll i=0;i<N;i++){
      cin>>arr[i];
      mp[arr[i]]++;
      mark[arr[i]]=true;
      if(isPowerOfTwo(arr[i])){
        V.push_back(arr[i]);
      }
    }
    //cout<<isPowerOfTwo(2)<<endl;
    bool flag=false;
      for(ll i=1;i<=2048;i*=2){
        //cout<<i<<endl;
        while(mp[i]>=2){
          ll tot=i+i;
          mp[tot]++;
          mp[i]=mp[i]-2;
          //cout<<mp[i]<<" ";
          mark[tot]=true;
          /*if(mark[tot]){
            flag=true;
            break;
          }*/
        }
      }
    if(mark[2048]){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    mp.clear();
    mark.clear();
  }
  return 0;
}
