#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  long long int n,i,j,x,y;
  while (cin>>n) {
    if(n==0){
      break;
    }
    if(n%2==0){
      cout<<"No solution"<<endl;
    }
  //  j=1;
    for(i=2,j=1;i<n;i+=2,j+=2){
      if((i*i*i)-(j*j*j)==n){
        x=i;
        y=j;
        break;
      }

    }
    cout<<x<<" "<<y<<endl;
  }
  return 0;
}
