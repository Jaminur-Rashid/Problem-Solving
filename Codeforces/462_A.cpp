#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int j[100],s[100],n,m;
 long long int product,i,k;
 while(scanf("%d %d",&n,&m)==2){
 for(i=0;i<n;i++){
  scanf("%lld",&j[i]);
 }
  for(k=0;k<m;k++){
  scanf("%lld",&s[k]);
 }
 sort(j,j+n);
 sort(s,s+m);
 product=j[n-2]*s[m-1];

 printf("%lld\n",product);
 }
 return 0;
}
