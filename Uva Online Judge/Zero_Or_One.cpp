#include<bits/stdc++.h>
#include<cstdio>
#include<cstdio>
using namespace std;
bool check(int x,int y,string str){
  int i,j;
  char s=str[x];
  for(i=x+1;i<=y;i++){
    if(str[i]!=s){
      return false;
      break;
    }
  }
  return true;
}

int main(){
  string str;
  int i,j,k,pos,n,x,y;
  while(getline(cin,str)){
    scanf("%d",&n);
    int len=str.size();
    cout<<len<<endl;
    for(i=0;i<n;i++){
      scanf("%d %d",&x,&y);
      j=min(x,y);
      k=max(x,y);
      int chk=check(j,k,str);
      if(chk){
        cout<<"Yes"<<endl;

      }
      else{
        cout<<"No"<<endl;
      }
    }

  }
}
