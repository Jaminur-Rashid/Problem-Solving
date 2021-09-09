#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,i,j,cnt;
  char str[105];
  scanf("%d",&n);
  getchar();
  for(j=1;j<=n;j++){
    gets(str);
    int len=strlen(str);
    cnt=0;
    for(i=0;i<len;i++){
      if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x'){
        cnt+=2;
      }
      else if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='v'||str[i]=='r'||str[i]=='y'){
        cnt+=3;
      }
      else if(str[i]=='s'||str[i]=='z'){
        cnt+=4;
      }
      else if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]==' '||str[i]=='t'||str[i]=='w'){
        cnt++;
      }
    }
    printf("Case #%d: %d\n",j,cnt);
  }
  return 0;
}
