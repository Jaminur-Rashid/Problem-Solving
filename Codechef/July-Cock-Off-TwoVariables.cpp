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
ll fib[100005],fibb[100005];
vector<ll>fiiib;
void preFiboNacci(){
  fib[0]=0;
  fib[1]=1;
  for(int i=2;i<=70;i++){
    fib[i]=fib[i-1]+fib[i-2];
  }
  ll x=2;
  for(int i=0;i<=66;i++){
    fibb[i]=fib[x];
    x++;
  }
}
int main(){
   __FastIO;
  ll n,T,tot,totLen,X;
  preFiboNacci();
  //cout<<fib[2]<<" "<<fib[66]<<endl;
  cin>>T;
  //preFiboNacci();
  /*for(int i=0;i<49;i++){
    cout<<fibb[i]<<" ";
  }
  */
  //cout<<endl;
  while(T--){
    cin>>X;
    ll cnt=0,mark;
    bool f=false,f1=false;
    for(int i=0;i<=66;i++){
      //cnt++;
      if(fibb[i]==X){
        mark=fibb[i];
        cnt++;
        f=true;
        break;
      }
      else if(fibb[i]>X){
        f1=true;
        break;
      }
      else{
        cnt++;
      }
    }
    if(f){
      cout<<cnt<<endl;
    }
    if(f1){
      cout<<cnt+1<<endl;
    }
  }
  return 0;
}
