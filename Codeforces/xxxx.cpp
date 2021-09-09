By Jaminurrashid, contest: Codeforces Round #550 (Div. 3), problem: (C) Two Shuffled Sequences, Accepted, #
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
ll arr[200005],brr[20005];
int main(){
  __FastIO;
  ll i,n,q,m,sum,ans,res,T,j,k;
