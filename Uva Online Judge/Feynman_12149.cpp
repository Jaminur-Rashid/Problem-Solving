#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,i;
  while(cin>>n){
    if(n==0){
      break;
    }
    long long int total=0;
    for(i=1;i<=n;i++){
      total+=(long long int)(pow(i,2));
      //Or i can use law:total=(n*(n+1)*(2*n+1))/6
    }
    cout<<total<<endl;
  }
}
