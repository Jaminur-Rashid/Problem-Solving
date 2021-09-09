#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int n,i,j;
  string s,s1;
  scanf("%d",&n);
  cin>>s;
  j=0;
  i=0;
  while( s[i]!='/0'){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
      if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y'){
          for(int j=0;j<n;j++){
            s[j]=s[i];
            if(s[i+1]){
              continue;
            }
            i++;j++;
          }
      }
    }
  }
}
