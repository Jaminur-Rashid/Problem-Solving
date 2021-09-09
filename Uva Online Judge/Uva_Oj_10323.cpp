#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long int factorial(long long int x){
  if (x<=0){
      return 1;
    }
    else{
  return (x*factorial(x-1));
   }
}

int main(){
  long long int n,fact;
  while(scanf("%lld",&n)==1){
    if((n<0)&&(n%2==0)){
        printf("Underflow!\n");
    }
    else if((n<0)&&(n%2!=0)){
      printf("Overflow!\n");
    }
    else if(n<=7){
      printf("Underflow!\n");
    }
    else if (n>13) {
      printf("Overflow!\n");
    }
    else{
      fact=factorial(n);
      printf("%lld\n",fact);
    }
  }
  return 0;
}
