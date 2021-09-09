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

ll sumOfDigit(ll val){
    ll sum=0;
    while(val!=0){
        sum+=(val%10);
        val/=10;
    }
    return(sum);
}
void solve(){
    ll n,k,testCase;
    string typed;
    cin>>testCase;
    while(testCase--){
        ll chef=0,morty=0;
        ll totNoOfSkip=0;
        cin>>n;
        for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            ll tmp=sumOfDigit(a);
            ll tmp1=sumOfDigit(b);
            if(tmp==tmp1){
                chef++;
                morty++;
            }
            else if(tmp>tmp1){
                chef++;
            }
            else{
                morty++;
            }
        }
        if(chef==morty){
            cout<<2<<' '<<chef<<nl;
        }
        else if(chef>morty){
            cout<<"0 "<<chef<<nl;
        }
        else{
            cout<<1<<' '<<morty<<nl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
