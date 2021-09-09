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

int main(){
  ll n,v,i,tot,sum,res;
  //cout<<8%3<<endl;
  while(cin>>n>>v){
    ll dis=n-1;
    tot=0;
    sum=(min(v,dis));
    dis-=sum;
    tot+=(sum);
    for(i=2;i<n;i++){
      if(dis==0)
      break;
      if(dis>0){
        sum--;
        res=v-sum;
        tot+=(res*i);
      }
      dis-=res;
    }
    cout<<tot<<endl;
  }
  return 0;
}
