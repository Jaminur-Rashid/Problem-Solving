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
    ll testCase;
    cin>>testCase;
    while(testCase--){
        ll num,num1;
        cin>>num>>num1;
        ll res=(num/num1);
        (num%num1==0) ? cout<<'0':cout<<((res+1)*num1)-num;
        cout<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
