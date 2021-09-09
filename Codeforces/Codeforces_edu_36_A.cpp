#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
  int n,k,i,s;
  int arr[1000];
  while(cin>>n>>k){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=n-1;i>=0;i--){
       if(k%arr[i]==0){
          s=arr[i];
         break;
        }

    }
  int  sum=0,cnt=1;
  while(sum!=k){
    sum=sum+s;
    if(sum!=k){
    cnt++;
    }
  }
  cout<<cnt<<endl;

  }
  return 0;
}
