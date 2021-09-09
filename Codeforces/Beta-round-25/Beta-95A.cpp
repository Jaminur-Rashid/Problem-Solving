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
    ll n;
    string digit;
    while(cin>>digit){
        ll upper=0;
        ll lower=0;
        for(int i=0;i<digit.size();i++){
            if(digit[i]>='a' and digit[i]<='z'){
                continue;
            }
            else{
                upper++;
            }
        }
        if(upper==digit.size()){
            for(int i=0;i<digit.size();i++){
                digit[i]=digit[i]+32;
            }
            cout<<digit<<nl;
        }
        else if((digit[0]>='a' and digit[0]<='z') and (upper==digit.size()-1)){
            digit[0]=digit[0]-32;
            for(int i=1;i<digit.size();i++){
                digit[i]=digit[i]+32;
            }
            cout<<digit<<nl;
        }
        else{
            cout<<digit<<nl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}
