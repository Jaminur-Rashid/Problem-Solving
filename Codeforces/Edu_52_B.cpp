/*
    Author:Jaminur Rashid
    Date:25.09.2018
    Problem Type:Greedy
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

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
      }
    return gcd(b, a % b);
  }
int main(){
  ll d,s,n,m;
  while(cin>>n>>m){
    ll mn=(n%m);
    if(m==0){
      cout<<n<<" "<<n<<endl;
    }
    else{
      cout<<mn<<" ";
      if(m%2==0){
        cout<<(n-(m+1))<<endl;
      }
      else if(m%2!=0&&m!=1){
        cout<<(n-m)<<endl;
      }
      else{
        cout<<(n-(m+1))<<endl;
      }
    }
  }
  return 0;
}
