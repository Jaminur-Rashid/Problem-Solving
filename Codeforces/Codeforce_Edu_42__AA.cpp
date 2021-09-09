#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
  long long int n,sum,sum1;
  int arr[200006],i,index;
while((scanf("%lld",&n))==1){
    sum=0;
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
      sum+=arr[i];
    }
    sum1=0;
    for(i=0;i<n;i++){
      sum1+=arr[i];
      if(sum1>=(sum/2)){
        index=i+1;
        break;
      }
    }
    printf("%d\n",index);
  }
  return 0;
}
