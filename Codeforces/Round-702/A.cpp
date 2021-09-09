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
    cin>>k;
    vector<int> v;
    while(k--){
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            int mx=max(v[i],v[i+1]);
            int mn=min(v[i],v[i+1]);
            if(mx>2*mn){
                while(mx>2*mn){
                    mx=(mx+1)/2;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        v.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
