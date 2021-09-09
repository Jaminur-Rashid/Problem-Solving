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
  ll n,m,i,j;
  int arr[30005];
  int arr1[30006];
  while(cin>>n>>m){
    map<int,int>mp;
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<m;i++){
      cin>>arr1[i];
      mp[arr1[i]]++;
    }
    ll cnt=0;
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    for(i=0;i<n;i++){
      bool flag=false;
      int p=0;
      for(j=0;j<m;j++){
        if((arr1[j])>=arr[i]&&mp[arr1[j]]!=0&&p!=1){
          mp[arr1[j]]--;
          p=1;
          flag=true;
        }
      }
      if(flag==false){
        cnt++;
      }
    }
    cout<<cnt<<endl;
    mp.clear();
  }
  return 0;
}
