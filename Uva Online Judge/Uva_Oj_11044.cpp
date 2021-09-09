/*Author:Jaminur Rashid
  Dept.of Cse "MBSTU"
  Date:6.4.18
  */
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int cal(int x,int y){
  int ans;
  ans=(x/3)*(y/3);
  return(ans);
}
int main(){
  int n,m,res,t;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&m);
    res=cal(n,m);
    printf("%d\n",res );
  }
  return 0;
}
