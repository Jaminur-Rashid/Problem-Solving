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
  ll n,x,i,y;
  ll arr[100007];
  map<ll,ll>mp;
  while(cin>>n){
    bool flag;
    cout<<mp[239]<<endl;
    for(i=1;i<=n;i++){
      cin>>arr[i];
    }
    for(i=1;i<=n;i++){
      x=arr[i];
      if(x==0&&i==1){
        mp[x]++;
      }
      else if(x!=0&&i==1){
        cout<<i<<endl;
        flag=true;
        break;
      }
      else if(x!=0){
        y=mp[x-1];
        if(mp[y]!=0){
          mp[x]++;
        }
      }
      else{
        cout<<i<<endl;
        flag=true;
      }
    }
    if(!flag){
      cout<<"-1"<<endl;
      break;
    }
  }
  return 0;
}
