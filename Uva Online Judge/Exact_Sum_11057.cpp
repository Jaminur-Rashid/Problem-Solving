#include<bits/stdc++.h>
#include<cstdio>
#include <algorithm>
using namespace std;

int main(){
  int n,a,b,dif,i,j,money;
  int arr[100000];
  while(scanf("%d",&n)==1){
    for (i=0; i <n; i++) {
      scanf("%d",&arr[i]);
    }
    scanf("%d",&money);
    sort(arr,arr+n);
  int min=10000000;
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        if(((arr[i])+(arr[j]))==money){
           dif=arr[j]-arr[i];
           if(dif<min){
           a=arr[i];
           b=arr[j];
         }


        }
      }
    }
    printf("Peter should buy books whose prices are %d and %d.\n",a,b);
    printf("\n");
  }
  return 0;
}
