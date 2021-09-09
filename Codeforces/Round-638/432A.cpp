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
    ll n,k;
    while(cin>>n>>k){
        vector<ll>nums;
        for(int i=0;i<n;i++){
            ll val;
            cin>>val;
            nums.pb(val);
        }
        sort(nums.begin(),nums.end());
        ll numOfTeam=0;
        if(n<=3){
            if(n==3 and nums[2]+k<=5){
                cout<<1<<nl;
            }
            else{
                cout<<0<<nl;
            }
        }
        else{
            for(int i=2;i<n;i+=3){
                if((nums[i]+k)<=5){
                    numOfTeam++;
                }
            }
            cout<<numOfTeam<<nl;
        }
        nums.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
