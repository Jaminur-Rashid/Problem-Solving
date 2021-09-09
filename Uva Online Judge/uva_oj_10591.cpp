#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,num,sum,rem;
long long int square_of_digit(long long int n){
  sum=0;
  while(n>0){
  rem=n%10;
  sum+=(rem*rem);
  n/=10;
  }
  return sum;
}
int main(){
  ll s,i;
  scanf("%lld",&n);
  s=square_of_digit(n);
  cout<<i<<endl;
}
