#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int checkArmstrongnum(long long int n);
//long long int sum;

int checkArmstrongnum(long long int n){
  long long originalnum,rem,dig=0,sum=0;
  originalnum=n;
  while(n!=0){
    n=n/10;
    dig++;
  }
 // originalnum=n;
  while(originalnum!=0){
    rem=originalnum%10;
    sum=sum+pow(rem,dig);
    originalnum/=10;
  }
  cout<<sum<<endl;
  return sum;
}


int main(){
  long long int num,s,t;
  cin>>t;
  while(t--){
  cin>>num;
 s= checkArmstrongnum(num);
  cout<<s<<endl;
  if(num==s){
    cout<<"Armstrong"<<endl;
  }
  else{
    cout<<"Not Armstrong"<<endl;
  }

  }
}
