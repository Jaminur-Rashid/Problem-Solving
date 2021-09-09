#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int arr[300005],br[100005];
//Problem_AAAA
int main(){
  __FastIO;
  ll n,m,x,y,z,i;
  while(cin>>n){
    ll arr[10005];
    for(i=1;i<=n;i++){
      cin>>arr[i];
    }
    ll cnt=1;
    map<ll,bool>mp;
    mp[1]=true;
    for(i=2;i<=n;i++){
      if(i==arr[i]&&arr[i-1]==arr[i]){
        cnt++;
        cout<<mp[i]<<" "<<" mp[i]"<<" "<<mp[arr[i]]<<" mp[arr[i]]"<<" "<<cnt;
      }
    }
    cout<<cnt<<endl;
  }
}
