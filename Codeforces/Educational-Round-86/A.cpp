#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'
#define MAX 99999999999
#define MIN 0

const unsigned int M = 1000000007;
void solve(){
    ll nOfSt,l,r,x,totTime,maxx,minn,a,b;
    vector<int>arr;
    cin>>l;
    while(l--){
        cin>>x>>r;
        cin>>a>>b;
        if(x>=r){
            maxx=x;
            minn=r;
        }
        else{
            maxx=r;
            minn=x;
        }
        ll x1=(minn-0)*a+(maxx-0)*a;
        ll x2=(minn*b)+((maxx-minn)*a);
        ll x3=(maxx*b)+((maxx-minn)*a);
        //cout<<x1<<' '<<x2<<' '<<x3<<endl;
        cout<<min(min(x1,x2),x3)<<endl;
        // ll x2=(maxx-minn)*b+(abs(minn)*a)+(maxx-mi);
        //
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
