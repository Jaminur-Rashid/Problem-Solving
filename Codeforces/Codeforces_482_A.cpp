#include<bits/stdc++.h>
#include<cstdio>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  unsigned long long  n,ans;
  while(cin>>n){
    if(n==0){
      cout<<"0"<<endl;
    }
    else if(n==1){
      cout<<"1"<<endl;
    }
    else if(n%2==0){
      ans=(n+2)/2+n/2;
      cout<<ans<<endl;
    }
    else if(n%2==1){
      ans=(n+1)/2;
      cout<<ans<<endl;
    }
  }
  return 0;
}
