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
  ll i,j,len,n,d;
  map<int,bool>mp;
  set<ll>s;
  int arr[105];
  while(cin>>n>>d){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){
      ll dis=(arr[i]-d);
      ll dis1=(arr[i]+d);
      bool flag=true;
      bool flag1=true;
      for(j=0;j<n;j++){
        if(abs(arr[j]-dis)<d){
          flag=false;
        }
        if(abs(arr[j]-dis1)<d){
          flag1=false;
        }
      }
      if(flag){
        //v.push_back(dis);
        s.insert(dis);
      }
      if(flag1){
      //  v.push_back(dis1);
      s.insert(dis1);
      }
    }
    int cnt=0;
    /*for(i=0;i<v.size();i++){
      //cout<<v[i]<<' ';
      if(mp[v[i]]){
        cnt++;
        mp[v[i]]=false;
      }

    }
    */
    cout<<s.size()<<endl;
    s.clear();
    //mp.clear();
  }
  return 0;
}
