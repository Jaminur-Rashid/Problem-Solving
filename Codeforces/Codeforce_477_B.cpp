#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
  long long int n,a,b,sum,ans,i,ss,cnt;
  int arr[1000007];
  double sum1;
  while(cin>>n>>a>>b){
    sum=0;
    for(i=0;i<n;i++){
      cin>>arr[i];
      sum=sum+arr[i];
    }
  double res=(arr[0]*a)/(sum*1.0);
  if(res>=b){
    cout<<"0"<<endl;
  }
  else{
  cnt=0;
  for(i=n-1;i>=1;i--){
    ss=sum-arr[i];
    if(arr[0]*a/ss*1.00>=b){
      ++cnt;
      break;
    }
    else{
      cnt++;
    }

  }
}
cout<<cnt<<endl;
}
return 0;
}
