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
//#define rrep(X,Y)
#define rrep(X,Y) for(int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
  __FastIO;
  ll n,m,i,j,cnt;
  ll arr[10005],arr1[10005];
  while(cin>>n>>m){
    queue<ll>q;
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    //cout<<arr[0]<<endl;
    for(j=0;j<m;j++){
    //  cin>>arr1[j];
      ll x;
      cin>>x;
      q.push(x);
    }
    cnt=0;
    for(i=0;i<n;i++){
      if((q.front()>=(arr[i]))&&(!q.empty())){
        cnt++;
        q.pop();
      }

    }
    cout<<cnt<<endl;

  }
  return 0;
}
