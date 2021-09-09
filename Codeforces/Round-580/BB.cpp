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
/*------------------------------------------------------*/
int main(){
  ll n,i,A,B,N,M,j;
  ll arr[100005],brr[100005];
  while(cin>>N){
    ll negNum=0,zero=0,ans=0,negMin=-1000000008,indx,posNum=0,posMin=9999999999,indx1,gtz=0;
    vector<ll>V;
    for(i=0;i<N;i++){
      ll x;
      cin>>x;
      V.push_back(x);
      if(x>0){
        ans+=(x-1);
      }
      else if(x<0){
        ll tmp=abs(x);
        ans+=(tmp-1);
        negNum++;
      }
      else{
        ans++;
        zero++;
      }
    }
    if(negNum%2){
      if(zero){
        ans+=0;
      }
      else{
        ans+=2;
      }
    }
    cout<<ans<<endl;
    V.clear();
  }
  return 0;
}
