#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
  int arr[10000],query[10000];
  int low,mid,high,key,i,n,q,t;
  t=1;
  while(scanf("%d %d",&n,&q)==2){
    if(n==0&&q==0){
      break;
    }
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    for(i=0;i<q;i++){
      scanf("%d",&query[i]);
    }
    sort(arr,arr+n);
    printf("CASE# %d:\n",t);
    for(i=0;i<q;i++){
      int ans=1000000;
      low=0;
      high=n-1;
      key=query[i];
    mid=(low+high)/2;
    while(low<=high){
      if(arr[mid]<key){
        low=mid+1;
      }
      else if(arr[mid]>key){
        high=mid-1;
      }
      else{
        ans=mid;
        high=mid-1;
      }
      mid=(low+high)/2;
    }
    if(ans==1000000){
      printf("%d not found\n",key);
    }
    else{
     printf("%d found at %d\n",key,ans+1);
    }

  }
  t++;
  }
  return 0;
}
