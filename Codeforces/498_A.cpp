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
  while(cin>>n){
    map<ll,bool>mp;
    set<ll>s;
    for(i=1;i<=n;i++){
      cin>>arr[i];
      s.insert(arr[i]);
    }
    set<ll>::iterator it;
    for(it=s.begin();it!=s.end();it++){
      for(j=1;j<=n;j++){
        if(()(arr[j]%2==1)){
          arr[j]=arr[j]+1;
        }
        else if((arr[j]%2==0)){
          arr[j]=arr[j]-1;
        }
        else{
          continue;
        }
      }
    }
    for(i=1;i<=n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
