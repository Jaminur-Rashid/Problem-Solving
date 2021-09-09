/*
Author:Jaminur Rashid
Date  :24/2/2019
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
vector<ll> is_prime(10005, true);

bool check(char str){
  int i;
  if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common,q,a,b;
  string str,s1;
  while(cin>>n){
    map<ll,ll>mp;
    ll arr[105];
    ll x=0,y=0;
    for(i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]>0){
        x++;
      }
      else if(arr[i]<0){
        y++;
      }
    }
    ll res=(n+1)/2;
    if(x>=res){
      cout<<"1"<<endl;
    }
    else if(y>=res){
      cout<<"-1"<<endl;
    }
    else{
      cout<<"0"<<endl;
    }
  }
  return 0;
}
