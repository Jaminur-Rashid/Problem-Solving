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
    while(testCase--){
        ll num,num1;
        cin>>num>>num1;
        vector<ll>nums;
        //ll sum=0;
        for(int i=0;i<num;i++){
            ll x;
            cin>>x;
            nums.pb(x);
        }
        sort(nums.begin(),nums.end());
        ll totNibo=0;
        ll ans=0;
        ll cnt=1;
        for(int i=num-1;i>=0;i--){
            totNibo+=nums[i];
            if(totNibo/cnt>=num1){
                ans++;
            }
            cnt++;

        }
        cout<<ans<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
