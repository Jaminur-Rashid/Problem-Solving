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
    vector<ll>prefixSum,nums;
    while(cin>>n>>k){
        //cout<<n<<k;
        for(int i=0;i<n;i++){
            ll val;
            cin>>val;
            nums.pb(val);
            if(i==0){
                prefixSum.pb(val);
            }
            else{
                prefixSum.pb(prefixSum[i-1]+val);
            }
        }
        cout<<prefixSum[0]<<nl;
        ll ans=99999999999;
        ll pos;
        for(int i=0;i<n;i++){
            //cout<<"i "<<i<<" i+k-1 "<<i+k-1<<" prefixSum[i] "<<prefixSum[i]<<" prefixSum[i+k-1]"<<prefixSum[i+k-1]<<nl;
            if(i==0){
                ll curSum=prefixSum[i+k-1];
                if(curSum<ans){
                    ans=curSum;
                    pos=i+1;
                }
            }
            else{
                if((i+k-1)>n-1){
                    break;
                }
                ll curSum=prefixSum[i+k-1]-prefixSum[i-1];
                //cout<<"curSum "<<curSum<<endl;
                if(curSum<ans){
                    ans=curSum;
                    pos=i+1;
                }
            }
        }
        cout<<pos<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
