#include<bits/stdc++.h>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int calFactors(int n){
  int i,sq,sum=0;
  //vector<int>vec;
  sq=sqrt(n);
  for(i=1;i<=sq;i++){
    if(n%i==0){
      if(n/i!=i&&n/i!=n){
        sum+=(n/i)+i;
      }
      else{
        sum+=i;
      }
    }
 }
 return (sum);
}
int main(){

  int n,i,ans,temp;

  for (i=0;;i++){
    cin>>n;
    if (i==0)
    printf("PERFECTION OUTPUT\n");
    if(n==0){
      break;
    }
    temp=n;
    ans=calFactors(n);
    if (n==1)
    printf("%5d  DEFICIENT\n",n);
    else if(ans==temp){
      printf("%5d  PERFECT\n",n);
    }
    else if(ans<temp){
      printf("%5d  DEFICIENT\n",n);
    }
    else{
      printf("%5d  ABUNDANT\n",n);
    }
  }
  printf("END OF OUTPUT\n");
  return 0;
}
