#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long int arr[1010];
void calPatterns(){
  int i;
  arr[0]=0;
  arr[1]=1;
  arr[2]=2;
  for(i=3;i<100;i++){
    arr[i]=arr[i-1]+arr[i-2];
  }
}

int main(){
  int n;
  calPatterns();
  while(cin>>n){
    if(n==0){
      break;
    }
    cout<<arr[n]<<endl;
  }
  return 0;
}
