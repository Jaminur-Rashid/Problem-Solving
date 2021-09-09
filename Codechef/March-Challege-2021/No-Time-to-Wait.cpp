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
    ll n,k,w,h,x;
    vector<int> v;
    cin>>n>>h>>x;
    bool chk=0;
    for(int i=1;i<=n;i++){
        int val;
        cin>>val;
        ll t=val+x;
        //cout<<" t "<<t<<endl;
        if(t>=h){
            cout<<"Yes"<<endl;
            chk=1;
            break;
        }
    }
    if(!chk){
        cout<<"No"<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
