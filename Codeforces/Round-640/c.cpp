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
    ll n,k,testCase;
    string typed;
    cin>>testCase;
    while(testCase--){
        cin>>n>>k;
        ll one=n-2;
        ll two=1;
        ll segSize=one+two;
        //cout<<segSize<<nl;
        if(n==2){
            cout<<(k-1)*2+1<<nl;
        }
        else{
            ll t=(k-1)/segSize;
            ll o=(k-1)-t;
            cout<<((t*2)+(o+1))<<nl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
