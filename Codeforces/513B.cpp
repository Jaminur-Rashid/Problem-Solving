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

ll digitSum(ll x){
  ll temp,sum=0;
  while(x!=0){
    sum=sum+(x%10);
    x/=10;
  }
  return(sum);
}
int main(){
  ll n,i,j,cnt;
  string str;
  vector<ll>v;
  map<ll,ll>mp;
  while(cin>>n){
    ll mx=0;
    ll cnt=(n/2);
    ll x,y,w,z;

    for(i=0;i<1000000;i++){
      bool flag=false;
      w=cnt;
      if((!flag)&&(cnt%10==9){
        ll a=digitSum(cnt);
        bool flag=true;
      }
      if(!flag){
          cnt--;
        }
        z++;
      ll b=digitSum(z);
      //cout<<a<<' '<<b

      if (mx<(a+b))
      {
        mx=a+b;
        x=cnt;
        y=n-x;
      }
      cnt--;
      if(cnt<0){
        break;
      }
    }
    //cout<<x<<' '<<y;
    //cout<<endl;
    cout<<mx<<endl;
  }
}
