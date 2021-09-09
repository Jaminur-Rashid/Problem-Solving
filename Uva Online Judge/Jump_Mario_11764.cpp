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
#define rep(X,Y) for (int (X) = 0;(X) < (Y)-1;++(X))
#define rrep(X,Y) for(int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
  ll n,i,j,highjmp,lowjmp,testCase,t;
  ll arr[100];
  cin>>testCase;
  for(t=1;t<=testCase;t++){
    cin>>n;
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    highjmp=0,lowjmp=0;
    for(i=1;i<n;i++){
      if(arr[i]>arr[i-1]){
        highjmp++;
      }
      else if(arr[i]<arr[i-1]){
        lowjmp++;
      }
    }
    cout<<"Case "<<t<<": "<<highjmp<<" "<<lowjmp<<endl;
  }
  return 0;
}
