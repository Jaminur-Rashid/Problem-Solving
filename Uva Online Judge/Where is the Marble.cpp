#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int t,n,q,i,murble[10000],query[10000];
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
      scanf("%d",&murble[i]);
    }
  for(i=0;i<q;i++){
  scanf("%d",&query[i]);
  }
  for(i=0;i<n;i++){
    printf("%d",murble[i]);
  }
for(i=0;i<q;i++){
printf("%d",query[i]);
}
}
}
