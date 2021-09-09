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
  ll n,d,r,i,testCase,j;
  string str;
  ll v[100];
  cin>>testCase;
  //cin.ignore();
  while(testCase--){
    cin.ignore();
    getline(cin,str);
    for(i=0;i<str.size();i++){
      x=str[i]-'0';

    }
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]*v[1]<<endl;
    ll gc=0;
    cout<<gc<<endl;
    for(i=0;i<len;i++){
      for(j=i+1;j<len;j++){
        gc=max(gc,gcd(v[i],v[j]));
      }
    }
    cout<<gc<<endl;
  }
  return 0;
}
