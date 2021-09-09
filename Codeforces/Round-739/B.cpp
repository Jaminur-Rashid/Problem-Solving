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
    while(k--){
        cin>>n;
        long long int tmp;
        for(int i=1;i<31624;i++){
            tmp=(i*i);
            if(tmp>n){
                tmp=i-1;
                break;
            }
        }
        cout<<"Tmp : "<<tmp<<endl;

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
