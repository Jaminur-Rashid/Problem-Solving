#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll n,m,x,y;
  string str;
  while(cin>>n){
    cin>>str;
    double len=str.length();
    for(ll i=0;i<(ceil)sqrt(len);i++){
      cout<<str[i*i];
    }
    cout<<endl;
  }
    return 0;
}
