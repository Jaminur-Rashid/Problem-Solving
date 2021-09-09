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
bool check(string st){
  ll l=0,h=st.size()-1;
  bool flag=false;
  while(l<=h){
    if(st[l]!=st[h]){
      flag=true;
    }
    l++;
    h--;
  }
  return(flag);
}
int main(){
  __FastIO;
  ll n,x,d,r,c,i,j;
  ll arr[20005],arr1[20005];
  while(cin>>n){
    ll j=0,k=n-1;
    cin>>c;
    arr[0]=0,arr[k]=c;
    for(i=1;i<n/2;i++){
      cin>>x;
      if(arr[j]+arr[k]==x){
        arr[j+1]=arr[j];
        arr[k-1]=arr[k];
      }
      else{
        arr[k-1]=arr[k];
        arr[j+1]=x-arr[k];
      }
    }
  for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
