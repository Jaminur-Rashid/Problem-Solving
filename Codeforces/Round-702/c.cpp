#include <bits/stdc++.h>

using namespace std;

typedef long long int  ll;
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
vector<int>v;
map<ll,bool>m;
void preCal(){
    for(ll i=1;i<=10000;i++){
        m[i*i*i]=true;
    }
}
void solve(){
    ll n,k,w,h;
    preCal();
    //cout<<chk[5779*5779*5779]<<" "<<chk[7993*7993*7993]<<endl;
    cin>>k;
    while(k--){
        int f=0;
        cin>>n;
        for(ll i=1;i<=10000;i++){
            ll tmp=i*i*i;
            ll res=n-tmp;
            if(m[res]){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(!f){
            cout<<"NO"<<endl;
        }
    }
}
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
