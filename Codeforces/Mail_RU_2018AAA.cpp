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
  ll n,x,y,z,t1,t2,t3,tmp,tmp1;
  while(cin>>x>>y>>z>>t1>>t2>>t3){
    tmp=(abs(x-y)*t1);
    tmp1=(abs(z-x)*t2)+(3*t3)+(abs(x-y)*t2);
  //  cout<<tmp<<" "<<tmp1<<endl;
    if(tmp1>tmp){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }

  return 0;
}
