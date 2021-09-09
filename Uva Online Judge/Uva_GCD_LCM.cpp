#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  long long int g,l,a,b,t;
  cin>>t;
  while(t--){
    cin>>g>>l;
    if(l%g!=0){
      cout<<"-1"<<endl;
    }
    else{
      a=g;
      b=l;
      cout<<a<<" "<<b<<endl;
    }
  }
  return 0;
}
