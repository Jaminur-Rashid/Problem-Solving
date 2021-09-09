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
  __FastIO;
  ll n,d,r,i,l,j,m,common,x,y,z,a,b,c,exA,exM;
  string str,s1;
  ll arr[30005];
  while(cin>>x>>y>>z){
    cin>>a>>b>>c;
    bool flag=true;
    if(a>=x){
      exA=(a-x);
    }
    else{
      flag=false;
    }
    if((exA+b)>=y){
      exM=(exA+b)-y;
    }
    else{
      flag=false;
    }
    if((exM+c)<z){
      flag=false;
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
