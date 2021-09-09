#include<bits/stdc++.h>
using namespace std;
int factorssum(int n){
  int i,factsum=0,r=sqrt(n);
  for(i=1;i<=r;i++){
    if(n%i==0){
      factsum+=i;
      if (i!=n/i)
        factsum+=n/i;
    }
  }
  return factsum;
}
int main(){
  int s,i,sum,factor,temp;
  while(cin>>s){
    if(s==0){
      break;
    }
    for(i=s;i>0;i--){
     //   temp=i;
        sum=factorssum(i);
        if(sum==s){
          break;
        }

    }
    if(sum==s){
    cout<<i<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}
