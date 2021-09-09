#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int n,i,j,rem,arr[10000];
  while(scanf("%d",&n)==1){
    memset(arr,0,sizeof(arr));
    if(n==0){
      break;
    }
   i=0;
   int couunt=0;
   while(n>0){
     if(n&1==1){
       arr[i]=1;
       couunt++;
   }
   else{
     arr[i]=0;
   }
    n= n>>1;;
     i++;
   }
   printf("The parity of ");
   for(j=i-1;j>=0;j--){
     printf("%d",arr[j]);
   }

   printf(" is %d (mod 2).\n",couunt);
 }
 return 0;
}
