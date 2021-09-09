#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll tc, n, k;

    cin>>tc;
    while(tc--){
          cin>>n>>k;
          ll x = n/k;
          if(k>1 && x%k!=0){
                cout<<"YES"<<endl;
          }
          else cout<<"NO"<<endl;
    }

    return 0;
}

