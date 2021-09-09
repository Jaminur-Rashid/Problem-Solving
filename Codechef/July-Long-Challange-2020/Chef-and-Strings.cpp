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
        ll totNoOfSkip=0;
        cin>>n;
        ll prevElement;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(i==0){
                prevElement=x;
            }
            else{
                ll tmp=abs(x-prevElement);
                if(tmp-1>0){
                    totNoOfSkip+=tmp-1;
                }
                prevElement=x;
            }
        }
        cout<<totNoOfSkip<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
