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
    int n;
    vector<int>l,r;
    while(cin>>n){
        ll minL=99999999999;
        ll maxR=0;
        int indx;
        for(int i=0;i<n;i++){
            int left,right;
            cin>>left>>right;
            l.pb(left);
            r.pb(right);
            if(left<=minL and right>=maxR){
                minL=min(minL,left*1LL);
                maxR=max(maxR,right*1LL);
                indx=i+1;
            }
        }
        //cout<<minL<<' '<<maxR<<' '<<indx<<endl;
        int ans=0;
        for(int i=0;i<n;i++){
            if(l[i]>=minL and r[i]<=maxR){
                ans++;
            }
        }
        if(ans==n){
            cout<<indx<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        l.clear();
        r.clear();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
