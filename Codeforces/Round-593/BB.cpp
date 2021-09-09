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
    ll n,k,w,h,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll arr[105];
        vector<ll>pos;
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            arr[i]=x;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[j]<arr[j+1]){
                    arr[j]=arr[j]+1;
                    pos.push_back(j);
                    break;
                }
            }
        }
        if(k>pos.size()){
            cout<<"-1"<<endl;
        }
        else{
            cout<<pos[k-1]<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
