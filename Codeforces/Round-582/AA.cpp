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
ll arr[100005],brr[100005];
vector<ll>V,V1;
/*------------------------------------------------------*/
void solve(ll n){

}
int main(){
  __FastIO;
  ll N,i,j,Test,M,A,B,C,X,Y,Z;
  string s,s1;
  //cin>>Test;
  while(cin>>A>>B){
    if(B%A==0){
      cout<<(B/A)<<endl;
    }
    else{
      cout<<(B/A)+1<<endl;
    }
  }

  return 0;
}
