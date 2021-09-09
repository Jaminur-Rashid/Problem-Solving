#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define ff first
#define s second
#define nl '\n'
#define MAX 99999999999
#define MIN 0

const unsigned int M = 1000000007;

void solve(){
    ll n,m,k;
    while(cin>>n){
        vector<ll>army;
        int hasSpace=0;
        for(int i=0;i<n;i++){
            ll pi,qi;
            cin>>pi>>qi;
            if(qi-pi>=2){
                hasSpace++;
            }
        }
        cout<<hasSpace<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
