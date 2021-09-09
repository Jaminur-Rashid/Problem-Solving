#include<bits/stdc++.h>
#include<cstdio>
#define pi acos(-1)
using namespace std;
int main(){
  int l,t;
  double redArea,r,rectArea,w;
  scanf("%d",&t);
  while(t--){
  scanf("%d",&l);
  w=(l*6)/(10.0);
  r=(l)/(5.0);
  redArea=pi*r*r;
  rectArea=(l*w)-(redArea);
  printf("%0.2lf %0.2lf\n",redArea,rectArea);
}

return 0;
}
