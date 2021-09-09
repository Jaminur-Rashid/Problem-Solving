/*Author : Jaminur Rashid
 Date    :6/7/2018
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
int main(){
  __FastIO;
  string str;
  ll n,m,i,j,li,lr;
  while(cin>>n>>m){
    for(i=0;i<m;i++){
      int x,y;
      cin>>x>>y;
    }
    bool flag=false;
    for(i=0;i<n;i++){
      if(flag==false){
      cout<<"1";
      flag=true;
     }
     else{
       cout<<"0";
       flag=false;
     }
    }
    cout<<endl;
  }
  return 0;
}
