#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[105];
  int i,j,n,pairnum=0;
  while(cin>>n){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
        if((arr[i]+arr[j])%2==1){
            pairnum=pairnum+1;
          }
    }
  }
  cout<<pairnum<<endl;
  }
  return 0;

}
