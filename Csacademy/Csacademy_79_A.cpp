#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
bool twoPointer(int arr[],int x,int n){
  int left,right;
  left=0;
  right=n-1;
  while(left<right){
    if(arr[left]+arr[right]==x){
      return true;
    }
    else if(arr[left]+arr[right]>x){
      right--;
    }
    else{
      left++;
    }
  }
  return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x,n,left,right,i,j,arr[100000];
  while(cin>>x>>n){
    for (size_t i = 0; i <n; i++) {
      cin>>arr[i];
    }
  bool ans= twoPointer(arr,x,n);
  if(ans){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  }
  return 0;
}
