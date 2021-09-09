#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
  long long int a,b,i,j,ans,temp,cnt;
  double flans;
  while(cin>>a>>b){
      if(a==0&&b==0){
        break;
      }
      cnt=0;
    for(i=a;i<=b;i++){
        flans=sqrt(i);
        ans=flans;
        if(flans==ans){
          cnt++;
        }
    }
    cout<<cnt<<endl;
  }
  return 0;
}
