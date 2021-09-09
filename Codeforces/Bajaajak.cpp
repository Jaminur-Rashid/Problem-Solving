#include<bits/stdc++.h>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll arr[1000007];
//ll arr[1000007];

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
/*#define MOD 100000000000000007
ull fast_power(ull base, ull power) {
    ull result = 1;
    while(power > 0) {

        if(power&1== 1) {
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power >>=1;
    }
    return result;
}
*/

int main() {
  ull x,y;
  while(cin>>x>>y){
    if(x==y){
      cout<<"="<<endl;
    }
    if((x==1&&y>1)||(x==2&&y==3)){
      cout<<"<"<<endl;
    }
    else if((x>1&&y==1)||(x==3&&y==2)){
      cout<<">"<<endl;
    }
    else if((x==2&&y==4)||(x==4&&y==2)){
      cout<<"="<<endl;
    }
    else{
      if(x>y){
        cout<<"<"<<endl;
      }
      else if(x<y){
        cout<<">"<<endl;
      }
    }
  }
    return 0;
}
