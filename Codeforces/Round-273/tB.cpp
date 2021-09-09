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

int main() {
    ll n,testCase,k;
    cin>>testCase;
    while(testCase--){
        cin>>n>>k;
        map<ll,ll>chk;
        bool f=false;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x>k){
                f=true;
            }
            mp[x]++;
        }
        if(f){
            cout<<"-1"<<nl;
        }
        else{

        }
    }
    return 0;
}
