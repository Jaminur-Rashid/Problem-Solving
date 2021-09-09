/*
Problem Tag :Prefix sum

*/
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
    string str;
    while(cin>>str){
        vector<ll>prefixSum;
        ll nOfQuery;
        cin>>nOfQuery;
        prefixSum.pb(0);
        for(int i=1;i<str.size();i++){
            prefixSum.pb(prefixSum[i-1]+(str[i]==str[i-1]));
        }
        while(nOfQuery--){
            ll l,r;
            cin>>l>>r;
            cout<<prefixSum[r-1]-prefixSum[l-1]<<nl;
            //cout<<prefixSum[r-1]-prefixSum[l-1]<<nl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
