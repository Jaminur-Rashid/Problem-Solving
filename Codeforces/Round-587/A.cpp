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
  string str;
  while(cin>>N){
    cin>>str;
    ll cnt=0;
    ll len=str.size();
    for(ll i=0;i<len;i+=2){
      if(str[i]==str[i+1]){
        cnt++;
        if(str[i]=='a'){
          str[i+1]='b';
        }
        else{
          str[i+1]='a';
        }
      }
    }
    cout<<cnt<<endl;
    cout<<str<<endl;
  }
  return 0;
}
