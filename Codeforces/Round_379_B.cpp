#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n,i,k2,k3,k5,k6,sum;
    while(cin>>k2>>k3>>k5>>k6){
      sum=0;
      long long int temp;
      temp=min(min(k2,k6),k5);
        sum=sum+temp*256;
        k2-=temp;
        temp=min(k2,k3);
        sum+=temp*32;
      /*while(1){
        if(k2!=0&&k5!=0&&k6!=0){
          sum+=256;
          k2--;
          k5--;
          k6--;
        }
        else if(k2&&k3){
          sum+=32;
          k2--;
          k3--;
        }
        else{
          break;
        }
      }
      */
      cout<<sum<<endl;

  }

}
