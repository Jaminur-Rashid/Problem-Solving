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
    int n;
    while(cin>>n){
        ll curCost=0;
        ll ans=0;
        for(int i=1;i<n;i++){
            ll tmp=(i+(i+1))%(n+1);
            if(i==0){
                ans+=tmp;
            }
            else{
                if(tmp>ans){
                    ans+=tmp-ans;
                   }
            }
        }
        cout<<ans<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
