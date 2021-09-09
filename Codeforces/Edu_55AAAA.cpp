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
  ll n,d,r,i,l,m,x,y,move;
  while(cin>>n>>x>>y>>d){
    move=0;
    m=y-x;
    if(m%d==0){
      cout<<((m)/d)<<endl;
    }
    else{
      if((x-1)<=0){
        if(((y-1)/d)<0){
          cout<<"-1"<<endl;
        }
      }
      ll a=(x-1);
      if(a%d!=0){
        a++;
      }
      if((y-1)%d==0){
        cout<<((y-1)/d)+((a/d))<<endl;
      }
    }
  }
    return 0;
}
