#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
//ll iteration;

bool isPallindrome(ll num1){
  ll temp=num1;
  ll reverse=0;
  while(num1!=0){
    reverse = reverse * 10;
    reverse = reverse + num1%10;
    num1/=10;
  }
  if(temp==reverse){
    return true;
  }
  return false;
}
int iteration=1;

ll reverseAndAdd(ll n){
  ll temp=n,num;
//  cout<<temp<<endl;
  ll reverse=0;
  while(n!=0){
    reverse = reverse * 10;
    reverse = reverse + n%10;
    n/=10;
  }
 num=temp+reverse;
  bool chk=isPallindrome(num);
  if(chk){
    cout<<iteration<<" "<<num<<endl;
    return(iteration);
  }
  //iteration++;
  else{
  iteration++;
  reverseAndAdd(num);
    //iteration++;
  }
  //iteration++;
}
int main(){
  __FastIO;
  ll n,testCase;
  cin>>testCase;
  while(testCase--){
  cin>>n;
  iteration =1;
  reverseAndAdd(n);
  //cout<<ans<<endl;
  }
  return 0;
}
