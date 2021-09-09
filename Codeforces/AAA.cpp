#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  long long int n,a,sub;
  int i;
  cin>>n;
    for(i=1;i<=n;i++){
      sub=n-i;
      if(i>=1&&i<=n&&i%2==0){
        printf("Mahmod\n");
        break;
      }
    if(i>=1&&i<=n&&i%2==1){
        printf("Ehab\n");
        break;
    }
      }




  return 0;
}
