#include<bits/stdc++.h>
#include<cstdio>
#include <cstdlib>
using namespace std;
int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  int x,y,z;
  char sign,str[100];
  int count=0;
  while(scanf("%d%c%d=%s",&x,&sign,&y,str)==4){
    if(sign=='+'){
      if(x+y==atoi(str)){
        count++;
      }
    }
      else if(sign=='-'){
        if(x-y==atoi(str)){
          count++;
        }
      }
  }
  printf("%d\n",count);
  return 0;
}
