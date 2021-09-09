#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
      }
    return gcd(b, a % b);
  }
int main(){
  ll n,i,m,j,k,arr[100006],a,b;
    ll pre[100005];
    pre[0]=0;
  while(cin>>n){
    for(i=1;i<=n;i++){
      cin>>arr[i];
    //  pre[i]=pre[i]+pre[i-1];
    }
    sort(arr,arr+n);
    for(i=1;i<n;i++){
      pre[i]+=pre[i-1];
    }
    for(i=1;i<=n;i++){

    }
  }
  /*while(cin>>n){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    k=0;
    bool chk=false;
    map<ll,bool>mp;
    for(i=1;i<n-1;i++){
        if(((arr[i+1]==1)&&(arr[i-1]==1))&&(arr[i]==0)&&(mp[i-1]==false)){
          k++;
          mp[i+1]=true;
        }
        cout<<k<<endl;
        mp.clear();
      }
}
*/
  return 0;
}
