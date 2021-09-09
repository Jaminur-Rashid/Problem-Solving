#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int n,x,y,q1,q2,q3,q4,sum,i;
  while(cin>>n){
    q1=0;
    q2=0;
    q3=0;
    q4=0;
    sum=0;
    for(i=1;i<=n;i++){
    cin>>x>>y;
   if((x>0)&&(y>0)){
     q1=1;;
   }
   else if((x>0)&&(y<0)){
     q2=1;
   }
   else if((x<0)&&(y<0)){
     q3=1;
   }
   else if(x<0&&(y>0)){
     q4=1;
   }
 }
 sum=q1+q2+q3+q4;
 printf("%d\n",sum);
  }
}
