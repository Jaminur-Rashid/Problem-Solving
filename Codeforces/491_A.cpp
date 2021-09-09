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
    ll a,b,c,n,ans,sum;
    string str;
    while(cin>>a>>b>>c>>n){
      sum=a+b-c;
      if(n<sum||(a==0&&b==0&&c==0)){
        cout<<"-1"<<endl;
      }
      else if(c>a||c>b){
        cout<<"-1"<<endl;
      }
      else if (sum>=n){
        cout<<"-1"<<endl;
      }
      else{
        cout<<(n-sum)<<endl;
      }
    }
    return 0;
}
