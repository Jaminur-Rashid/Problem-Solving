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
ll arr[300005],br[100005];
int main(){
  __FastIO;
  ll i,n,q,m,sum,ans,res;
  while(cin>>n){
    for(i=1;i<=n;i++){
      cin>>arr[i];
    }
    ll pos=0,pos1=0;
    bool flag=false,flag1=false;
    for(i=n;i>=1;i--){
      if(arr[i]==1&&!flag){
        pos=i;
        flag=true;
      }
      else if(arr[i]==0&&!flag1){
        pos1=i;
        flag1=true;
      }
    }
    cout<<min(pos,pos1)<<endl;
  }

    return 0;
}
