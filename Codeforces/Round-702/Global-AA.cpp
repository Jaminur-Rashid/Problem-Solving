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
    vector<int>v,v1;
    cin>>n>>k;
    ll cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            cnt++;
        }
        v.push_back(x);
    }
    v1=v;
    sort(v1.begin(),v1.end(), greater<int>());
    for(int i=1;i<=k;i++){
        ll x,y;
        cin>>x>>y;
        if(x==2){
            if(cnt>=y){
                cout<<'1'<<endl;
            }
            else{
                cout<<'0'<<endl;
            }
        }
        else{
            if(v[y-1]==1){
                cnt--;
                v[y-1]=0;
            }
            else{
                cnt++;
                v[y-1]=1;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
