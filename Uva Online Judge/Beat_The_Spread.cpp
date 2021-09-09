/*Author:Jaminur Rashid
*Date:29.4.2018
*Time:12.00AM
*Problem Name:Beat The Spread
*/
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
  int n,a,b,first,second;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d",&a,&b);
    first=(a+b)/2;
    second=(first-b);
    if((a+b)%(2)==1||(first<0)||(second<0)){
      printf("impossible\n");
    }
    else{
      printf("%d %d\n",first,second);
    }
}
return 0;
}
