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
int main(){
  ll N,M,A,B,C,D,i,testCase,K;
  string str;
  map<ll,ll>mp;
  while(cin>>N){
    cin>>str;
    for(i=0;i<N;i++){
      mp[str[i]]++;
    }
    ll numOfOne=min(min(mp['o'],mp['n']),mp['e']);
    mp['0']-=numOfOne;
    mp['n']-=numOfOne;
    mp['e']-=numOfOne;
    ll numOfZero=min(min(mp['z'],mp['e']),min(mp['r'],mp['o']));
    if(numOfOne==0&&numOfZero==0){
      cout<<"0"<<endl;
    }
    if(numOfOne>0){
      while(numOfOne>0){
        cout<<"1 ";
        numOfOne--;
      }
      if(numOfZero>0){
        while(numOfZero>0){
          cout<<"0 ";
          numOfZero--;
        }
        cout<<endl;
      }
      else{
        cout<<endl;
      }
    }
    else{
      while(numOfZero>0){
        cout<<"0 ";
        numOfZero--;
      }
      cout<<endl;
    }
    mp.clear();
  }
  return 0;
}
