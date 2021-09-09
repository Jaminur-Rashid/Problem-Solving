/*
    Author:Jaminur Rashid
    Date:14.09.2018
    Problem Type:Math
*/
#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll findBinary(ll N){
  ll i,one=0;
  ll arr[1000];
  i=0;
  while(N>0){
  ll x=(N%2);
  N/=2;
  if(x==1){
    one++;
   }
  }
  return(one);
}
int main(){
  ll T,n ,A,B,C,i;
  cin>>T;
  while(T--){
    cin>>n;
  /*  for(i=0;i<=n;i++){
      ll x=(n^i);
      ll y=(n)-x-i;
      if(y==0){
        cout<<i<<" ";
      }

    }
    */
  ll numofOne=findBinary(n);
  //cout<<numofOne<<endl;
  double x=numofOne;
  cout<<(ll)pow(2.0,x)<<endl;;
  }
  return 0;
}
