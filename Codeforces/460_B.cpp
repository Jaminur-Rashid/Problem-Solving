#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int perfectint(long long int num){
  long long int rem,sum=0;
  while(num!=0){
    rem=num%10;
    sum=sum+rem;
    num/=10;
  }
  return sum;

}
int main(){
  long long int n,s;
  int k,i;
  scanf("%d",&k);
   n=19;
  int cnt=0;
  while(cnt!=k){
        s=perfectint(n);
       n++;
        if(s==10){
          cnt++;
        }
/*if(cnt==k){
          break;
        }
        */
  }
  cout<<n-1<<endl;
}
