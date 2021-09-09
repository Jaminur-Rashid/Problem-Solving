#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long ll;
bool prime[1000005];

void primeGenerate(){
  ll i,j,sq;
  /*for(i=4;i<=10000000000;i+=2){
    prime[i]=true;
  }
  */
  sq=sqrt(10000000000);
  for(i=2;i<=sq;i+=2){
    for(j=i;j*i<=10000000000;j+=2){
      prime[i*j]=true;
    }
  }
  for(i=2;i<100;i++){
    if(!prime[i]){
      cout<<i<<" ";
    }
  }
}
int main(){
  primeGenerate();
}
