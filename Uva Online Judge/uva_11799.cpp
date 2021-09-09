#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n,t,maxi;
    int arr[105];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
      scanf("%d",&n);
      for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
      }
      sort(arr,arr+n);
      reverse(arr,arr+n);
      printf("Case %d: %d\n",i,arr[0]);
    }
}
