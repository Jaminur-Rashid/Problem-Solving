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
int main(){
  __FastIO;
  ll n,d,r,i,l,m,x,y,z;
  bool flag;
  for(i=1;i<=3;i++){
    if(i==1){
      x=3;
      cout<<"3"<<endl;
      cin>>y;
      if(x==3&&y==2){
        cout<<"1"<<endl;
        flag=true;
      }
      else if(x==3&&y==1){
        cout<<"2"<<endl;
        flag=true;
      }
    }
    if(i==2){
      x=2;
      cout<<x<<endl;
      cin>>y;
      if(x==2&&y==1){
        cout<<"3"<<endl;
        flag=true;
      }
      else if(x==2&&y==3){
        cout<<"1"<<endl;
        flag=true;
      }
    }
    if(i==3){
      x=1;
      cout<<x<<endl;
      cin>>y;
      if(x==1&&y==2){
        cout<<"3"<<endl;
        flag=true;
      }
      else if(x==1&&y==3){
        cout<<"2"<<endl;
        flag=true;
      }
    }
  }
  return 0;
}
