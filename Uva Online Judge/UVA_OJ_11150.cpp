#include<bits/stdc++.h>
using namespace std;
int cocacola(int s,int j){
  int total,result=s;
  total=s+j;
  if(total<3){
    return 0;
  }
  while(total>=3){
  result=result+total/3;
  total=total%3+total/3;
  }
  return result;
}

int main(){
    int i,n;
    while(cin>>n){
    int m1,m2,m3,m4;
    m1=cocacola(n,0);
   m2=cocacola(n,1);
   m3=cocacola(n,2);
   m4=max(m1,m2);
   cout<<max(m3,m4)<<endl;
    }
    return 0;
}
