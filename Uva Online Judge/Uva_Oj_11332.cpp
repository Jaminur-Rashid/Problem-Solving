#include<bits/stdc++.h>
using namespace std;
long long int n,sum,i,j,rem;
long long int calsum(long long int num){
  sum=0;
  while(num!=0){
    rem=num%10;
    sum=sum+rem;
    num/=10;
}
  return sum;

}

int main(){
  long long int n;
  while(cin>>n){
     if(n==0){
        break;
      }
    while(n>9){
        sum=calsum(n);
       n=sum;
   }
    cout<<n<<endl;

 }
}
