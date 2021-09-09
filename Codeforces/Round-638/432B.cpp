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

struct color{
    ll home;
    ll away;
};
void solve(){
    ll n;
    color arr[100007];

    while(cin>>n){
        map<ll,ll>cnt;
        for(int i=1;i<=n;i++){
            ll x,y;
            cin>>x>>y;
            cnt[x]++;
            arr[i].home=x;
            arr[i].away=y;
        }
        // for(int i=1;i<=n;i++){
        //     cout<<arr[i].home<<' '<<arr[i].h<<nl;
        // }
        for(int i=1;i<=n;i++){
            ll homee=n-1;
            ll awayy=n-1;
            ll add=cnt[arr[i].away];
            cout<<homee+add<<' '<<awayy-add<<nl;
        }
    }
}
const unsigned int M = 1000000007;

int main() {
    solve();
    return 0;
}
