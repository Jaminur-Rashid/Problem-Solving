#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
  int n,i,median,t;
  int arr[1000];
  cin>>t;
  while(t--){
  cin>>n;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  median=arr[n/2];
  int dist=0;
  for(i=0;i<n;i++){
    dist+=abs(median-arr[i]);
  }
  cout<<dist<<endl;
}
  return 0;
}
