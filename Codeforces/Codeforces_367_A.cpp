#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int n,a,b,x,y,v;
  double time,d,t=10000;
  cin>>a>>b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x>>y>>v;
     d=sqrt((double)(a-x)*(a-x)+(b-y)*(b-y));
    time=d/v;
    t=min(t,time);


  }
   printf("%.20f\n",t);
}
