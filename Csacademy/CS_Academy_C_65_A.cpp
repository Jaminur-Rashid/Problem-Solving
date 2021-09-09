#include <bits/stdc++.h>
#include<string>

using namespace std;

int main() {
    char s1[100];
    char s2[100];
    char s4[100];
    char s3[50]="abcdefghijklmnopqrstuvwxyz";
    int i;
    while(scanf("%s %s",s1,s2)==2){
      for(i=0;i<strlen(s1);i++){
          for(int j=0;j<strlen(s3);j++){
            if(s1[i]==s3[j]){
              int pos=j;
              s1[i]=s2[pos];
              break;
            }
            //break;
          }

      }
      cout<<s1<<endl;
    }
    return 0;
}
