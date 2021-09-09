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
  ll n,T,tot,totLen;
  vector<ll> v;
  vector<string>direction;
  cin>>T;
  while(T--){
    cin>>totLen>>tot;
    for(int t=0;t<tot;t++){
      ll len;
      string dir;
      cin>>len>>dir;
      v.push_back(len);
      direction.push_back(dir);
    }
    ll cnt=0,j=0,sum;
    for(int i=0;i<tot;i+=j){
      sum=0,j=i;
      if((cnt%2==0)&&direction[j]=="left"){
        while(sum<=totLen&&direction[j]=="left"){
          sum+=v[j];
          j++;
        }
        cnt++;
      }
      else if(cnt%2==0&&direction[j]=="right"){
        cnt++;
      }
      else if(cnt%2&&direction[j]=="right"){
        while(sum<=totLen&&direction[j]=="right"){
          sum+=v[j];
          j++;
        }
        cnt++;
      }
      else if(cnt%2&&direction[j]=="left"){
        cnt++;
      }
    }
    cout<<cnt<<endl;
    v.clear();
    direction.clear();
  }
  return 0;
}
