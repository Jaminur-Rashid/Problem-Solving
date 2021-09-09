#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;

int calAns(int j,int s){
  int dif,result;
  dif=abs(j-s);
  if(dif<50){
    return(dif);
  }
  else return((100)-(dif));
}
int main(){
  int a,b,ans;
  while(scanf("%d %d",&a,&b)==2){
    if((a==-1)&&(b==-1)){
      break;
    }
    ans=calAns(a,b);
    printf("%d\n", ans);
  }
  return 0;
}
