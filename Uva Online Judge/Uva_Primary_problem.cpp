#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int n,i,j,ans,p,dif,n1,n2,sign;

void seiveOfErathosthenes(int num){
  bool prime[1000007];
  memset(prime,true,sizeof(prime));
  for(i=2;i*i<n;i++){
    if(prime[i]==true){
      for(j=i*2;j<=n;j=j+i){
        prime[j]=false;
      }
    }
  }
  if(n==4){
    printf("4:\n");
    printf("2+2\n");
    sign++;
  }
  else if(n==6){
    printf("6:\n");
    printf("3+3\n");
    sign++;
  }
  else{
  dif=0;
  sign=0;
  for(i=2;i<=n/2;i++){
      if(prime[i]&&prime[n-i]){
        sign++;
        if(((n-i)-(i)>dif)&&(n-i)+(i)==n){
          n1=i;
          n2=n-i;
          printf("%d:\n",n);
          printf("%d+%d\n",n1,n2);
          break;
        }
      }
    }
  }
  if(!sign){
  printf("NO WAY!\n");
}
}

int main(){
  while(scanf("%d",&n)==1){
    if(n==0){
     break;
    }
    seiveOfErathosthenes(n);

  }
}
