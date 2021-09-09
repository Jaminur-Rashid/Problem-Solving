#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
bool prime[1000005];

void primeGenerate(){
  int i,j,sq;
  for(i=4;i<=1000007;i+=2){
    prime[i]=true;
  }
  sq=sqrt(1000007);
  for(i=3;i<=sq;i+=2){
    for(j=i;j*i<=1000007;j+=2){
      prime[i*j]=true;
    }
  }
}
int main(){
  primeGenerate();
  int s,i;
  while(scanf("%d",&s)==1){
    for(i=3;i<=1000007;i++){
      if(!prime[i]&&!prime[i+2]){
        cout<<"("<<i<<", "<<i+2<<")"<<endl;
      }
    }
  }
}
