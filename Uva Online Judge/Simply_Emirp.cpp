#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

bool primee[1000005];

void checkPrime(){
int i,j;
for (i=4;i<=1000000;i+=2){
  primee[i]=true;
}
int r=sqrt(1000000);
for (i=3;i<=r;i+=2)
{
  for (j=i;i*j<=1000000;j+=2){
  primee[i*j]=true;
   }
 }
}
ll revesrNum(ll num){
  ll reverse=0;
  while(num!=0){
    reverse=reverse*10;
    reverse=reverse+num%10;
    num/=10;
  }
  return reverse;
}

int main(){
  __FastIO;
  ll n,ans;
  checkPrime();
  while(cin>>n){
    if(primee[n]){
      cout<<n<<" is not prime."<<endl;
    }
    else{
      ll temp=n;
      ll rev=revesrNum(n);
      if(!primee[rev]&&!primee[temp]&&temp!=rev){
        cout<<n<<" is emirp."<<endl;
      }
      else if(!primee[n]){
        cout<<n<<" is prime."<<endl;
      }
    }
  }
  return 0;
}
