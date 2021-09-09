#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
bool prime[1000005];
int i,j,n;


void primeGenerate(){
  for(i=4;i<=1000005;i+=2){
    prime[i]=true;
  }
  int x=sqrt(1000005);
  for(i=3;i<=x;i+=2){
      for(j=i;i*j<=1000005;j+=2){
        prime[i*j]=true;
      }
    }
}
void checkConjecture(int n){
  for(i=3;i<=n;i++){    if((!prime[i])&&(!prime[n-i])){
      if((i)+(n-i)==n){
        cout<<n <<" = "<<i<<" + "<<n-i<<endl;
        break;
      }
    }
  }
}


int main(){
  primeGenerate();
  while(cin>>n){
    if(n==0){
      break;
    }
    checkConjecture(n);
  }
  return 0;
}
