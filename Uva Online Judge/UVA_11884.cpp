#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int t,c,d,i;
  float f ,f1,tempa;
  scanf("%d",&t);
  i=1;
  while(t--){
    scanf("%d %d",&c,&d);
    f=float(9*c)/5+32;
    f1=f+d;
    tempa=(5*(f1-32))/9;
    printf("Case %d: %0.2f\n",i,tempa);
    i++;
  }
  return 0;
}
