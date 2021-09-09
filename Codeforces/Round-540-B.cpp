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
vector<ll> is_prime(10005, true);

bool check(char str){
  int i;
  if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common,q,a,b;
  string str,s1;
  ll arr[200005];
  while(cin>>n){
    ll oddSum=0,evenSum=0;
    map<ll,bool>mp;
    for(i=1;i<=n;i++){
      cin>>arr[i];
      if(i%2==0){
        oddSum+=arr[i];
      }
      else{
        evenSum+=arr[i];
      }
    }
    ll cnt=0;
    for (i=1;i<=n;i++) {
      if(i==1){
        evenSum=evenSum-arr[i];
        if(evenSum==oddSum){
          cnt++;
        }
      }
      else if(i==2){
        oddSum=oddSum-arr[i]+arr[1];
        if(evenSum==oddSum){
          cnt++;
        }
      }
      else if((i%2==1)){
        evenSum=evenSum-arr[i]+arr[i-1];
        if(evenSum==oddSum){
          cnt++;
        }
      }
      else{
        oddSum=oddSum-arr[i]+arr[i-1];
        if(evenSum==oddSum){
          cnt++;
        }
      }
    }
  cout<<cnt<<endl;
}
  return 0;
}
