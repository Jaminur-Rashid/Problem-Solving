#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  long long int n,i,k2,k3,k5,k6,sum;
  int arr[100005];
  while(cin>>n){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    /*for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    */
    //cout<<endl;
    int flag=0;
    for(i=0;i<n-2;i++){
      if(arr[i]+arr[i+1]>arr[i+2]){
        //cout<<"YES"<<endl;
        flag=1;
        break;
      }
    }
    if(flag==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
}
