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

/*bool chk(int arr){
  ll low=0;
  ll high=n-1;
  while(low<high){
    if(arr[low]!=arr[])
  }
}
*/
int main(){
    ll x,y,i,j,n,k;
    int arr[100000];
    while(cin>>n){
      ll sum=0;
      for(i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
      }
      //sort(arr,arr+n);
      if(n==1){
        cout<<"-1"<<endl;
      }
      else{
      bool flag=false;
      ll pos;
      j=0;
      ll sum1=0;
      for(i=n-1;i>=0;i--){
        if((sum-arr[i])==(sum1+arr[i])){
          sum1+=arr[i];
          j++;
          if(i==(n/2)){
            flag=false;
            break;
          }
        }
        else {
          //pos=i-1;
          j++;
          flag=true;
          break;
        }
      }
      if(flag){
      cout<<(n-j)<<endl;
      rep(i,n-j){
        cout<<arr[i]<<' ';
      }
      cout<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
    }
    }
    return 0;
}
