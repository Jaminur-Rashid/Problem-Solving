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
  double n,m,a,i,ans;
  while (cin>>n>>m>>a) {
    double hight=ceil(m/a),width=ceil(n/a);
    //printf("%.01f",(hight*width));
    cout<<(ll)(hight*width)<<endl;
  }
  return 0;
}
