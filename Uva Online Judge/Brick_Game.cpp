/*
    Author:Jaminur Rashid
    Date:25.09.2018
    Problem Type:Greedy
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
  ll n,d,r,i,testCase,j;
  int arr[15];
  cin>>testCase;
  for(i=1;i<=testCase;i++){
    cin>>n;
    for(j=0;j<n;j++){
      cin>>arr[j];
    }
    sort(arr,arr+n);
    cout<<"Case "<<i<<": "<<arr[n/2]<<endl;
  }
  return 0;
}
