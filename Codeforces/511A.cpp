#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n,b,c,x,y,i;
  while(cin>>n){
    ll mx=0;
    while(n--){
      cin>>x>>y;
      if((x+y)>mx){
        mx=(x+y);
      }
    }
    cout<<mx<<endl;
    /*if(x%3==0){
      x++;
    }
    cout<<x<<" "<<x<<" "<<(n-(2*x))<<endl;
    */
      /*  if((n-(1+2))%3!=0&&(1+2+(n-3)==n)){
          cout<<"1"<<" "<<"2"<<" "<<(n-3)<<endl;
        }
        else if((n-(1+1))%3!=0&&(1+1+(n-2)==n)){
          cout<<"1"<<" "<<"1"<<" "<<(n-2)<<endl;
        }
        else if((n-(2+2))%3!=0&&(2+2+(n-4)==n)){
          cout<<"2"<<" "<<"2"<<" "<<(n-4)<<endl;
        }
        */

  }
}
