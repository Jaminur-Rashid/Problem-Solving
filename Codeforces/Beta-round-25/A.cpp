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
    ll testCase;
    cin>>testCase;
    int ixdx;
    int even=0;int odd=0;
    vector<int>nums;
    for(int i=1;i<=testCase;i++){
        ll x;
        cin>>x;
        (x%2)? odd++ : even++;
        nums.pb(x);
    }
    if(even>=odd){
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2){
                cout<<i+1<<nl;
            }
        }
    }
    else{
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                cout<<i+1<<nl;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    cout<<"1"<<endl;
    solve();
    return 0;
}
