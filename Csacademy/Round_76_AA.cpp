#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int sumOfDigit(int x){
  int rem,sum=0;
  while(x!=0){
    rem=x%10;
    sum+=rem;
    x/=10;

  }
  return sum;
}
int main(){
  int n,num,ans,couunt;
  while(cin>>n){
    couunt=0;
    while(n){
      n=n-sumOfDigit(n);
      couunt++;
    }
    cout<<couunt+1<<endl;
  }
}
