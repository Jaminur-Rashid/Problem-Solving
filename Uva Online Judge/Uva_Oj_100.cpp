#include<bits/stdc++.h>

using namespace std;

int countingcycle(long long int n){
  int cntt=1;
  while(n>1){
    if(n%2==0){
      n=n/2;
    }
    else{
      n=(3*n)+1;
    }
    cntt++;
  }
  return cntt;
}
int main(){
  long long int i,j,x,y,cnt,maxi;
  while(cin>>i>>j){
  if(i<j){
    x=i;
    y=j;
  }
  else{
    x=j;
    y=i;
  }
maxi=1;
  for(;x<=y;x++){
    //  maxi=1;
    cnt=countingcycle(x);
    if(cnt>maxi){
      maxi=cnt;
    }
  }
  cout<<i<<" "<<j<<" "<<maxi<<endl;
  }
  return 0;
}
