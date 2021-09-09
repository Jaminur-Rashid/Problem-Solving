#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a,b;
  double price=1000,p;
 scanf("%d %d",&n,&m);
  while(n--){
      scanf("%d %d",&a,&b);
      p=(double)a/b;
      if(p<price){
        price=p;
      }
  }
  double cost=m*price;
  printf("%.8f",cost);
}
