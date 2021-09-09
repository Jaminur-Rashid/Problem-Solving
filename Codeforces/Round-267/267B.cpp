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
    while(cin>>n>>m>>k){
        vector<ll>army;
        for(int i=0;i<=m;i++){
            ll x;
            cin>>x;
            army.pb(x);
        }
        //cout<<army[m-1]<<endl;
        ll ans=0;
        for(int i=0;i<m;i++){
            ll xorValue=army[i]^army[m];
            if(__builtin_popcount(xorValue)<=k){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
