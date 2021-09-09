#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
int i;
void checkSubstring(char str[],char str1[]){
    char* p;
    p=strstr(str,str1);
    if(p){
    printf("y\n");
  }
  else{
    printf("n\n");
  }
    return;
}

int main(){
  int t,i,q,p;
  char str[100004],str1[1005][1005];
  scanf("%d",&t);
  while(t--){
    scanf("%[^\n]s",str);
    scanf("%d",&q);
    for(i=0;i<q;i++){
      scanf("%s",str1[i]);
    }
    i=0;
    while(i<q){
      checkSubstring(str,str1[i]);
      i++;
    }
  }
  return 0;
}
