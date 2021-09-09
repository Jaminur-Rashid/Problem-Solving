#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,q;
  int arr[100000];
  int arr1[100005];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cin>>q;
  for(int j=0;j<q;j++){
  cin>>arr1[j];
  }
//  sort(arr,arr+n);
  int cnt=0;
  for(int j=0;j<q;j++){
    for(int i=0;i<n;i++){
      if(arr1[j]>=arr[i]){
        cnt++;
      }
     // outc<<cnt<<endl;
    }
  printf("%d\n",cnt);
  }
  return 0;

}
