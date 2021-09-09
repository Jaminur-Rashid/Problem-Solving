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
    ll n,k,i,j,cnt;
    int arr[106];
    map<ll,bool>mp;
    while(cin>>n>>k){
      rep(i,n){
        cin>>arr[i];
      }
      cnt=0;
      i=0;
      j=n-1;
      while(true){
        if((arr[i]>k&&arr[j]>k)||(i-j==1)){
          break;
        }
        if(arr[i]<=k){
        //  mp[arr[i]]=true;
          i++;
          cnt++;
        }
        else if(arr[j]<=k){
          cnt++;
          //mp[arr[j]]=true;
          j--;
        }
      }
      cout<<cnt<<endl;
      mp.clear();
    }
    return 0;
}
