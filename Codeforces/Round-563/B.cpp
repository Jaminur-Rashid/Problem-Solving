/*
  Author : Jaminur Rashid
  Date : 04-08-2019
*/
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

ll findSum(ll num){
  ll sum=0;
  while(num!=0){
    sum+=(num%10);
    num/=10;
  }
  return(sum);
}

/*------------------------------------------------------*/
int main(){
  __FastIO;
  ll n,d,r,i,j,l,m,k,A,B,C;
  return 0;
}