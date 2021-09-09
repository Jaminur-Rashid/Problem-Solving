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
void prime(){
//vector<ll> is_prime(10005, true);
for (ll i = 2; i <= 10005; i++) {
    if (is_prime[i] && (i * i) <= 10005) {
        for (ll j = i * i; j <= 10005; j += i)
            is_prime[j] = false;
    }
}
}
int main(){
  ///  #00001a Content Colour
  __FastIO;
  ll n,d,r,i,l,j,m,common,k;
  string str,s1;
  while(cin>>n>>k>>m){
    ll arr[100005];
    double sum=0.0,sum1=0.0,tot=0.0,avg=0.0;
    for(i=0;i<n;i++){
      cin>>arr[i];
      sum+=((double)arr[i]);
    }
    sort(arr,arr+n);
    for(j=0;j<n;j++){
      if((j==n-1)||(m==0)){
        break;
      }
      sum1+=((double)arr[j]);
      m--;
    }
    ll N=(n-j);
    tot=(sum-sum1);
    if(m!=0){
      if(k>m){
        k=m;
      }
    tot+=((double)k);
    }
    avg=((tot)/((double)N)*(1.0));
    cout<<fixed << setprecision(10)<<avg<<endl;
  }
  return 0;
}
