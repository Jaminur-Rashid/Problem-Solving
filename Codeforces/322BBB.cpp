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
ll arr[100005],br[100005];
int main(){
  __FastIO;
  ll n,d,r,i,l,m;
  cin>>d;
  while(d--){
    cin>>n;
    if(n%2==0){
      cout<<n/2<<" "<<n/2<<endl;
    }
    else{
      m=n/2;
      n++;
      cout<<(n/2)<<" "<<m<<endl;
    }
    /*cin>>n>>m;
    if(n>=m){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    */
  }
    return 0;
}
