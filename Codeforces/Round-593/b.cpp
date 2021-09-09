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
    ll n,k,w,h;
    //cout<<0%2<<endl;
    cin>>k;
    while(k--){
        vector<int>v;
        cin>>n;
        int one=0;
        int two=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.pb(x);
            sum+=x;
            if(x==1){
                one++;
            }else{
                two++;
            }
        }
        if(sum%2){
            cout<<"No"<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
