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
int arr[300005],br[100005];
int main(){
  __FastIO;
  ll i,n,q,m;
  string str;
  //Problem-B
  while(cin>>n){
    ll arr[200005];
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    ll tot=0;
    for(i=n-1;i>=0;i--){
      ll val=arr[i],val1=arr[i-1];
      if(val>val1){
        tot+=val;
        //cout<<tot<<" "<<"tot"<<" ";
      }
      else{
        tot=tot+(val);
        arr[i-1]=val-1;
        if(arr[i-1]<0){
          arr[i-1]=0;
        }
        //cout<<arr[i-1]<<" "<<" arr"<<" ";
      }
    }
    cout<<tot<<endl;
  }
  //Problem-AA
  /*while(cin>>n){
    cin>>str;
    ll tot=0;
    for(i=0;i<str.length();i++){
      int ch=(int)str[i]-48;
      if(ch%2==0){
        tot+=i+1;
      }
    }
    cout<<tot<<endl;
  }
  */
    return 0;
}
